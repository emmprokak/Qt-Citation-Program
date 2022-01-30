/**
Qt Citation Program
Copyright (C) 2021 Prokakis Emmanouil

Qt Citation Program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Qt Citation Program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Qt Citation Program. If not, see <https://www.gnu.org/licenses/>.
**/

#include "chaptercitationwindow.h"
#include "ui_chaptercitationwindow.h"
#include <QTimer>
#include <QClipboard>

ChapterCitationWindow::ChapterCitationWindow(QWidget *parent, const QString& style) :
    QMainWindow(parent), ui_4(new Ui::ChapterCitationWindow), style(style)
{
    ui_4->setupUi(this);
    init_gui();
}

ChapterCitationWindow::~ChapterCitationWindow()
{
    delete ui_4;
}

void ChapterCitationWindow::on_button_back_clicked()
{
    this->~ChapterCitationWindow();
}

void ChapterCitationWindow::init_gui()
{
    this->setFixedSize(this->width(),this->height());
    setup_labels_and_entries();
    setup_in_labels_and_entries();
    button_back_icon();

    ui_4->label_copy->setText("Copied everything!");
    ui_4->label_copy->hide();
    ui_4->radio_1st->setChecked(true);
    ui_4->radio_1st_in->setChecked(true);
    prepare_gui_for_multiple_authors();
    prepare_gui_for_multiple_authors_in();
    this->setWindowTitle("Citing chapter-in-book");
    ui_4->groupBox->setTitle("Input data for " + style + " citation!");
    ui_4->label_result->setWordWrap(true);
}

bool ChapterCitationWindow::check_if_entries_empty()
{
   return (ui_4->lineedit_author->text() == "" ||
           ui_4->lineedit_year->text() == "");
}

bool ChapterCitationWindow::check_if_entries_empty_in()
{
   return (ui_4->lineedit_author_in->text() == "" ||
           ui_4->lineedit_year_in->text() == "");
}

void ChapterCitationWindow::clear_entries()
{
    ui_4->lineedit_author->setText("");
    ui_4->lineedit_year->setText("");
    ui_4->lineedit_title->setText("");
    this->lineedit_2nd_author->setText("");
    this->lineedit_3rd_author->setText("");
}

void ChapterCitationWindow::clear_entries_in()
{
    ui_4->lineedit_author_in->setText("");
    ui_4->lineedit_year_in->setText("");
    ui_4->lineedit_title_in->setText("");
    ui_4->lineedit_place_in->setText("");
    ui_4->lineedit_publisher_in->setText("");
    this->lineedit_2nd_author_in->setText("");
    this->lineedit_3rd_author_in->setText("");
}

void ChapterCitationWindow::setup_labels_and_entries()
{
    this->grid = new QGridLayout;
    this->grid->addWidget(ui_4->label_author,0,0);
    this->grid->addWidget(ui_4->lineedit_author,0,1);
    this->grid->addWidget(ui_4->label_year,3,0);
    this->grid->addWidget(ui_4->lineedit_year,3,1);
    this->grid->addWidget(ui_4->label_title,4,0);
    this->grid->addWidget(ui_4->lineedit_title,4,1);
    ui_4->groupBox->setLayout(this->grid);
}

// the "_in" variable postfix refers to "In" part of the citation,
// referencing the book where the chapter is published on
void ChapterCitationWindow::setup_in_labels_and_entries()
{
    this->grid_in = new QGridLayout;
    this->grid_in->addWidget(ui_4->label_author_in,0,0);
    this->grid_in->addWidget(ui_4->lineedit_author_in,0,1);
    this->grid_in->addWidget(ui_4->label_year_in,3,0);
    this->grid_in->addWidget(ui_4->lineedit_year_in,3,1);
    this->grid_in->addWidget(ui_4->label_title_in,4,0);
    this->grid_in->addWidget(ui_4->lineedit_title_in,4,1);
    this->grid_in->addWidget(ui_4->label_place_in,5,0);
    this->grid_in->addWidget(ui_4->lineedit_place_in,5,1);
    this->grid_in->addWidget(ui_4->label_publisher_in,6,0);
    this->grid_in->addWidget(ui_4->lineedit_publisher_in,6,1);
    ui_4->groupBox_in->setLayout(this->grid_in);
}

void ChapterCitationWindow::prepare_gui_for_multiple_authors()
{
    this->label_2nd_author = new QLabel();
    this->label_2nd_author->setText("2nd Author");
    this->label_3rd_author = new QLabel();
    this->label_3rd_author->setText("3rd Author");
    this->lineedit_2nd_author = new QLineEdit(this);
    this->lineedit_3rd_author = new QLineEdit(this);
    this->grid->addWidget(this->label_2nd_author,1,0);
    this->grid->addWidget(this->lineedit_2nd_author,1,1);
    this->grid->addWidget(this->label_3rd_author,2,0);
    this->grid->addWidget(this->lineedit_3rd_author,2,1);
    on_radio_1st_clicked();
    ui_4->groupBox->setLayout(this->grid);
}

void ChapterCitationWindow::prepare_gui_for_multiple_authors_in()
{
    this->label_2nd_author_in = new QLabel();
    this->label_2nd_author_in->setText("2nd Author");
    this->label_3rd_author_in = new QLabel();
    this->label_3rd_author_in->setText("3rd Author");
    this->lineedit_2nd_author_in = new QLineEdit(this);
    this->lineedit_3rd_author_in = new QLineEdit(this);
    this->grid_in->addWidget(this->label_2nd_author_in,1,0);
    this->grid_in->addWidget(this->lineedit_2nd_author_in,1,1);
    this->grid_in->addWidget(this->label_3rd_author_in,2,0);
    this->grid_in->addWidget(this->lineedit_3rd_author_in,2,1);
    on_radio_1st_in_clicked();
    ui_4->groupBox_in->setLayout(this->grid_in);
}

void ChapterCitationWindow::button_back_icon()
{
    QPixmap img_back(":/back.png");
    QIcon icon_back(img_back);
    ui_4->button_back->setIcon(icon_back);
    ui_4->button_back->setFixedSize(57,38);
    ui_4->button_back->setIconSize(QSize(62,30));
}

void ChapterCitationWindow::on_button_copy_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    QString final_text = ui_4->label_result->text();
    clipboard->setText(final_text);

    QTimer::singleShot(0,ui_4->label_copy,&QLabel::show);
    QTimer::singleShot(1500,ui_4->label_copy,&QLabel::hide);
}

void ChapterCitationWindow::on_radio_1st_clicked()
{
    if(two_author)
    {
        this->grid->itemAtPosition(1,0)->widget()->hide();
        this->grid->itemAtPosition(1,1)->widget()->hide();
    }
    else if(three_author || one_author)
    {
        this->grid->itemAtPosition(1,0)->widget()->hide();
        this->grid->itemAtPosition(1,1)->widget()->hide();
        this->grid->itemAtPosition(2,0)->widget()->hide();
        this->grid->itemAtPosition(2,1)->widget()->hide();
    }
    monitor_active_radio_button();
}

void ChapterCitationWindow::on_radio_2nd_clicked()
{
    if(three_author)
    {
       this->grid->itemAtPosition(2,0)->widget()->hide();
       this->grid->itemAtPosition(2,1)->widget()->hide();
    }
    else if(one_author)
    {
        this->grid->itemAtPosition(1,0)->widget()->show();
        this->grid->itemAtPosition(1,1)->widget()->show();
    }

    monitor_active_radio_button();
}

void ChapterCitationWindow::on_radio_3rd_clicked()
{
   this->grid->itemAtPosition(1,0)->widget()->show();
   this->grid->itemAtPosition(1,1)->widget()->show();
   this->grid->itemAtPosition(2,0)->widget()->show();
   this->grid->itemAtPosition(2,1)->widget()->show();

    monitor_active_radio_button();
}

void ChapterCitationWindow::on_radio_1st_in_clicked()
{
    if(two_author_in)
    {
        this->grid_in->itemAtPosition(1,0)->widget()->hide();
        this->grid_in->itemAtPosition(1,1)->widget()->hide();
    }
    else if(three_author_in || one_author_in)
    {
        this->grid_in->itemAtPosition(1,0)->widget()->hide();
        this->grid_in->itemAtPosition(1,1)->widget()->hide();
        this->grid_in->itemAtPosition(2,0)->widget()->hide();
        this->grid_in->itemAtPosition(2,1)->widget()->hide();
    }
    monitor_active_radio_button_in();
}

void ChapterCitationWindow::on_radio_2nd_in_clicked()
{
    if(three_author_in)
    {
       this->grid_in->itemAtPosition(2,0)->widget()->hide();
       this->grid_in->itemAtPosition(2,1)->widget()->hide();
    }
    else if(one_author_in)
    {
        this->grid_in->itemAtPosition(1,0)->widget()->show();
        this->grid_in->itemAtPosition(1,1)->widget()->show();
    }

    monitor_active_radio_button_in();
}

void ChapterCitationWindow::on_radio_3rd_in_clicked()
{
   this->grid_in->itemAtPosition(1,0)->widget()->show();
   this->grid_in->itemAtPosition(1,1)->widget()->show();
   this->grid_in->itemAtPosition(2,0)->widget()->show();
   this->grid_in->itemAtPosition(2,1)->widget()->show();

    monitor_active_radio_button_in();
}

void ChapterCitationWindow::monitor_active_radio_button()
{
    if(ui_4->radio_1st->isChecked())
    {
        one_author = true;
        two_author = false;
        three_author = false;
    }
    else if(ui_4->radio_2nd->isChecked())
    {
        one_author = false;
        two_author = true;
        three_author = false;
    }
    else if(ui_4->radio_3rd->isChecked())
    {
        one_author = false;
        two_author = false;
        three_author = true;
    }
}

void ChapterCitationWindow::monitor_active_radio_button_in()
{
    if(ui_4->radio_1st_in->isChecked())
    {
        one_author_in = true;
        two_author_in = false;
        three_author_in = false;
    }
    else if(ui_4->radio_2nd_in->isChecked())
    {
        one_author_in = false;
        two_author_in = true;
        three_author_in = false;
    }
    else if(ui_4->radio_3rd_in->isChecked())
    {
        one_author_in = false;
        two_author_in = false;
        three_author_in = true;
    }
}

void ChapterCitationWindow::on_button_reset_clicked()
{
    this->clear_entries();
}


void ChapterCitationWindow::on_button_reset_in_clicked()
{
    this->clear_entries_in();
}

void ChapterCitationWindow::on_button_go_clicked()
{
    this->format_citation();
}

void ChapterCitationWindow::format_citation()
{
    QString author = ui_4->lineedit_author->text();
    QString year = ui_4->lineedit_year->text();
    QString title = ui_4->lineedit_title->text();

    QString author_in = ui_4->lineedit_author_in->text();
    QString year_in = ui_4->lineedit_year_in->text();
    QString title_in = ui_4->lineedit_title_in->text();
    QString place_in = ui_4->lineedit_place_in->text();
    QString publisher_in = ui_4->lineedit_publisher_in->text();

    QString author_2nd;
    QString author_3rd;
    QString author_2nd_in;
    QString author_3rd_in;

    this->format = "";

    if(check_if_entries_empty() || check_if_entries_empty_in())
        return;

    this->format += format_author(author,this->style);

    if(two_author)
    {
        author_2nd = lineedit_2nd_author->text();
        this->format += ", & " + format_author(author_2nd,this->style);
    }

    else if(three_author)
    {
         author_2nd = lineedit_2nd_author->text();
         author_3rd = lineedit_3rd_author->text();
         this->format += ", " + format_author(author_2nd,this->style);
         this->format += ", & " + format_author(author_3rd,this->style);
    }

    if(this->style == "Harvard Style")
        this->format += " (" + year + "), " + format_title(title) + ", ";
    else if(this->style == "APA Style")
        this->format += " (" + year + "). " + format_title(title) + ". ";

    //handle in part of citation

    this->format += "In " + format_author(author_in,this->style);

    if(two_author_in)
    {
        author_2nd_in = lineedit_2nd_author_in->text();
        this->format += ", & " + format_author(author_2nd_in,this->style);
        this->format += " (eds)";
    }

    else if(three_author_in)
    {
         author_2nd_in = lineedit_2nd_author_in->text();
         author_3rd_in = lineedit_3rd_author_in->text();
         this->format += ", " + format_author(author_2nd_in,this->style);
         this->format += ", & " + format_author(author_3rd_in,this->style);
         this->format += " (eds)";
    }else
    {
        this->format += " (ed)";
    }

    if(this->style == "Harvard Style")
        this->format += " (" + year_in + "), " + format_title(title_in) + ", " + format_title(place_in) + ": " + format_title(publisher_in);
    else if(this->style == "APA Style")
        this->format += " (" + year + "). " + format_title(title_in) + ". " + format_title(place_in) + ": " + format_title(publisher_in);

    //show result
    ui_4->label_result->setText(format);
    ui_4->label_result->setTextInteractionFlags(Qt::TextSelectableByMouse);

}


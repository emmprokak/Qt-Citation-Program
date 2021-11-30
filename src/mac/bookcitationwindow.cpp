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

#include "bookcitationwindow.h"
#include "ui_bookcitationwindow.h"
#include "papercitationwindow.h"
#include <QString>
#include <QMessageBox>
#include <QStringList>
#include <QClipboard>
#include <QTimer>

BookCitationWindow::BookCitationWindow(QWidget *parent, const QString& style) :
    QMainWindow(parent), ui_3(new Ui::BookCitationWindow), style(style)
{
    ui_3->setupUi(this);
    init_gui();
}

BookCitationWindow::~BookCitationWindow()
{
    delete ui_3;
}

void BookCitationWindow::on_button_back_clicked()
{
    this->~BookCitationWindow();
}

void BookCitationWindow::init_gui()
{
    this->setWindowTitle("Citing Book");
    this->setFixedSize(this->width(),this->height());
    setup_labels_and_entries();
    button_back_icon();

    ui_3->label_copy->setText("Copied everything!");
    ui_3->label_copy->hide();
    ui_3->groupBox->setTitle("Input data for " + style + " citation!");
    ui_3->label_result->setWordWrap(true);
    ui_3->radio_1st->setChecked(true);
    prepare_gui_for_multiple_authors();
}

void BookCitationWindow::button_back_icon()
{
    QPixmap img_back(":/back.png");
    QIcon icon_back(img_back);
    ui_3->button_back->setIcon(icon_back);
    ui_3->button_back->setFixedSize(57,38);
    ui_3->button_back->setIconSize(QSize(62,30));
}
void BookCitationWindow::monitor_active_radio_button()
{
    if(ui_3->radio_1st->isChecked())
    {
        one_author = true;
        two_author = false;
        three_author = false;
    }
    else if(ui_3->radio_2nd->isChecked())
    {
        one_author = false;
        two_author = true;
        three_author = false;
    }
    else if(ui_3->radio_3rd->isChecked())
    {
        one_author = false;
        two_author = false;
        three_author = true;
    }
}

bool BookCitationWindow::check_if_entries_empty()
{
   return (ui_3->lineedit_author->text() == "" ||
           ui_3->lineedit_year->text() == "");
}

void BookCitationWindow::clear_entries()
{
    ui_3->lineedit_author->setText("");
    ui_3->lineedit_year->setText("");
    ui_3->lineedit_title->setText("");
    ui_3->lineedit_place->setText("");
    ui_3->lineedit_publisher->setText("");
    this->lineedit_2nd_author->setText("");
    this->lineedit_3rd_author->setText("");
}

void BookCitationWindow::setup_labels_and_entries()
{
    this->grid = new QGridLayout;
    this->grid->addWidget(ui_3->label_author,0,0);
    this->grid->addWidget(ui_3->lineedit_author,0,1);
    this->grid->addWidget(ui_3->label_year,3,0);
    this->grid->addWidget(ui_3->lineedit_year,3,1);
    this->grid->addWidget(ui_3->label_title,4,0);
    this->grid->addWidget(ui_3->lineedit_title,4,1);
    this->grid->addWidget(ui_3->label_place,5,0);
    this->grid->addWidget(ui_3->lineedit_place,5,1);
    this->grid->addWidget(ui_3->label_publisher,6,0);
    this->grid->addWidget(ui_3->lineedit_publisher,6,1);
    ui_3->groupBox->setLayout(this->grid);
}

void BookCitationWindow::prepare_gui_for_multiple_authors()
{
    font = ui_3->lineedit_author->font();
    this->label_2nd_author = new QLabel();
    this->label_2nd_author->setText("2nd Author");
    this->label_2nd_author->setFont(font);
    this->label_3rd_author = new QLabel();
    this->label_3rd_author->setText("3rd Author");
    this->label_3rd_author->setFont(font);
    this->lineedit_2nd_author = new QLineEdit(this);
    this->lineedit_3rd_author = new QLineEdit(this);
    this->grid->addWidget(this->label_2nd_author,1,0);
    this->grid->addWidget(this->lineedit_2nd_author,1,1);
    this->grid->addWidget(this->label_3rd_author,2,0);
    this->grid->addWidget(this->lineedit_3rd_author,2,1);
    on_radio_1st_clicked();
    ui_3->groupBox->setLayout(this->grid);
}

void BookCitationWindow::on_radio_1st_clicked()
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

void BookCitationWindow::on_radio_2nd_clicked()
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

void BookCitationWindow::on_radio_3rd_clicked()
{
   this->grid->itemAtPosition(1,0)->widget()->show();
   this->grid->itemAtPosition(1,1)->widget()->show();
   this->grid->itemAtPosition(2,0)->widget()->show();
   this->grid->itemAtPosition(2,1)->widget()->show();

    monitor_active_radio_button();
}

void BookCitationWindow::on_button_go_clicked()
{
    this->format_citation();
}

void BookCitationWindow::on_button_copy_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    QString final_text = ui_3->label_result->text();
    clipboard->setText(final_text);

    QTimer::singleShot(0,ui_3->label_copy,&QLabel::show);
    QTimer::singleShot(1500,ui_3->label_copy,&QLabel::hide);
}

void BookCitationWindow::on_button_reset_clicked()
{
    this->clear_entries();
}

void BookCitationWindow::format_citation()
{
    QString author = ui_3->lineedit_author->text();
    QString year = ui_3->lineedit_year->text();
    QString title = ui_3->lineedit_title->text();
    QString place = ui_3->lineedit_place->text();
    QString publisher = ui_3->lineedit_publisher->text();
    QString author_2nd;
    QString author_3rd;

    this->format = "";

    if(check_if_entries_empty())
        return;

    this->format = format_author(author,this->style);

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
        this->format += " (" + year + "), " + format_title(title) + ", " + format_title(place) + ": " + format_title(publisher);
    else if(this->style == "APA Style")
        this->format += " (" + year + "). " + format_title(title) + ". " + format_title(place) + ": " + format_title(publisher);

    ui_3->label_result->setText(format);
    ui_3->label_result->setTextInteractionFlags(Qt::TextSelectableByMouse);
}




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

#include "papercitationwindow.h"
#include "ui_papercitationwindow.h"
#include <QString>
#include <QMessageBox>
#include <QStringList>
#include <QClipboard>
#include <QTimer>

PaperCitationWindow::PaperCitationWindow(QWidget *parent, const QString& style) :
    QMainWindow(parent),ui_2(new Ui::PaperCitationWindow), style(style)
{
    ui_2->setupUi(this);
    this->setWindowTitle("Citing Paper");
    this->setFixedSize(this->width(),this->height());
    setup_labels_and_entries();
    button_back_icon();

    ui_2->groupBox->setTitle("Input data for " + style + " citation!");
    ui_2->label_result->setWordWrap(true);
    ui_2->radio_1st->setChecked(true);
    prepare_gui_for_multiple_authors();
}

PaperCitationWindow::~PaperCitationWindow()
{
    delete ui_2;
}

void PaperCitationWindow::on_button_back_clicked()
{
    this->~PaperCitationWindow();
}

void PaperCitationWindow::button_back_icon()
{
    QPixmap img_back(":/back.png");
    QIcon icon_back(img_back);
    ui_2->button_back->setIcon(icon_back);
    ui_2->button_back->setFixedSize(57,38);
    ui_2->button_back->setIconSize(QSize(62,30));  
}

void PaperCitationWindow::monitor_active_radio_button()
{
    if(ui_2->radio_1st->isChecked())
    {
        one_author = true;
        two_author = false;
        three_author = false;
    }
    else if(ui_2->radio_2nd->isChecked())
    {
        one_author = false;
        two_author = true;
        three_author = false;
    }
    else if(ui_2->radio_3rd->isChecked())
    {
        one_author = false;
        two_author = false;
        three_author = true;
    }
}

bool PaperCitationWindow::check_if_entries_empty()
{
   return (ui_2->lineedit_author->text() == "" ||
           ui_2->lineedit_year->text() == "") ? true : false;
}

void PaperCitationWindow::clear_entries()
{
    ui_2->lineedit_author->setText("");
    ui_2->lineedit_year->setText("");
    ui_2->lineedit_title->setText("");
    ui_2->lineedit_details->setText("");
}

void PaperCitationWindow::setup_labels_and_entries()
{
    this->grid = new QGridLayout;
    this->grid->addWidget(ui_2->label_author,0,0);
    this->grid->addWidget(ui_2->lineedit_author,0,1);
    this->grid->addWidget(ui_2->label_year,3,0);
    this->grid->addWidget(ui_2->lineedit_year,3,1);
    this->grid->addWidget(ui_2->label_title,4,0);
    this->grid->addWidget(ui_2->lineedit_title,4,1);
    this->grid->addWidget(ui_2->label_details,5,0);
    this->grid->addWidget(ui_2->lineedit_details,5,1);
    ui_2->groupBox->setLayout(this->grid);
}

void PaperCitationWindow::prepare_gui_for_multiple_authors()
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
    ui_2->groupBox->setLayout(this->grid);
}

void PaperCitationWindow::on_radio_1st_clicked()
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

void PaperCitationWindow::on_radio_2nd_clicked()
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

void PaperCitationWindow::on_radio_3rd_clicked()
{
   this->grid->itemAtPosition(1,0)->widget()->show();
   this->grid->itemAtPosition(1,1)->widget()->show();
   this->grid->itemAtPosition(2,0)->widget()->show();
   this->grid->itemAtPosition(2,1)->widget()->show();

    monitor_active_radio_button();
}

void PaperCitationWindow::on_button_go_clicked()
{
    this->format_citation();
}

void PaperCitationWindow::on_button_copy_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    QString final_text = ui_2->label_result->text();
    clipboard->setText(final_text);

    QTimer::singleShot(0,[&](){ ui_2->label_copy->setText("Copied everything!");});
    QTimer::singleShot(1500,ui_2->label_copy,&QLabel::hide);
    QTimer::singleShot(1500,[&](){ ui_2->label_copy->setText(" ");});
    QTimer::singleShot(0,ui_2->label_copy,&QLabel::show);
}

void PaperCitationWindow::on_button_reset_clicked()
{
    this->clear_entries();
}

void PaperCitationWindow::format_citation()
{
    QString author = ui_2->lineedit_author->text();
    QString year = ui_2->lineedit_year->text();
    QString title = ui_2->lineedit_title->text();
    QString details = ui_2->lineedit_details->text();
    QString author_2nd;
    QString author_3rd;

    this->format = "";

    if(check_if_entries_empty())
        return;

    this->format = format_author(author,this->style);

    if(two_author)
    {
        author_2nd = lineedit_2nd_author->text();
        this->format += ", " + format_author(author_2nd,this->style);
    }

    else if(three_author)
    {     
         author_2nd = lineedit_2nd_author->text();
         author_3rd = lineedit_3rd_author->text();
         this->format += ", " + format_author(author_2nd,this->style);
         this->format += " && " + format_author(author_3rd,this->style);
    }

    if(this->style == "Harvard Style")  
        this->format += " (" + year + "), \"" + format_title(title) + "\", " + format_title(details);
    else if(this->style == "APA Style")
        this->format += " (" + year + "). " + format_title(title) + ". " + format_title(details);

    ui_2->label_result->setText(format);
    ui_2->label_result->setTextInteractionFlags(Qt::TextSelectableByMouse);
}



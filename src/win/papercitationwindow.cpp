/**
Qt Citation Program
Copyright (C) 2022 Prokakis Emmanouil

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
#include <QPushButton>
#include <QSpinBox>
#include <QFont>
#include <QSplitterHandle>

PaperCitationWindow::PaperCitationWindow(QWidget *parent, const QString& style, bool multiple_authors) :
    QMainWindow(parent),ui_2(new Ui::PaperCitationWindow), style(style), multiple_authors(multiple_authors)
{
    ui_2->setupUi(this);
    init_gui();
}

PaperCitationWindow::~PaperCitationWindow()
{
    delete ui_2;
}

void PaperCitationWindow::init_gui()
{
    this->setWindowTitle("Citing Paper");
    this->setFixedSize(this->width(),this->height());
    setup_labels_and_entries();
    button_back_icon();

    ui_2->groupBox->setTitle("Input data for " + style + " citation!");
    ui_2->label_result->setWordWrap(true);
    ui_2->radio_1st->setChecked(true);
    prepare_gui_for_multiple_authors();
    ui_2->spinbox->hide();
    ui_2->label_copy->setText("Copied everything!");
    ui_2->label_copy->hide();

    // disable splitter functionality for the user
    for (int i = 0; i < ui_2->splitter->count(); i++)
    {
        QSplitterHandle *splitter_handler = ui_2->splitter->handle(i);
        splitter_handler->setEnabled(false);
    }

    if(multiple_authors)
        init_many_more_authors();

    fixTabOrder();
}

void PaperCitationWindow::fixTabOrder()
{
    this->setTabOrder(ui_2->lineedit_author, this->lineedit_2nd_author);
    this->setTabOrder(this->lineedit_2nd_author, this->lineedit_3rd_author);
    this->setTabOrder(this->lineedit_3rd_author,ui_2->lineedit_year);
    if(multiple_authors)
    {
        this->setTabOrder(this->lineedit_3rd_author,this->author_4);
        this->setTabOrder(this->author_4, this->author_5);
        this->setTabOrder(this->author_5, this->author_6);
        this->setTabOrder(this->author_6, this->author_7);
        this->setTabOrder(this->author_7, this->author_8);
        this->setTabOrder(this->author_8, this->author_9);
        this->setTabOrder(this->author_9, this->author_10);
        this->setTabOrder(this->author_10, ui_2->lineedit_year);
    }

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
           ui_2->lineedit_year->text() == "");
}

void PaperCitationWindow::clear_entries()
{
    ui_2->lineedit_author->setText("");
    ui_2->lineedit_year->setText("");
    ui_2->lineedit_title->setText("");
    ui_2->lineedit_details->setText("");
    this->lineedit_2nd_author->setText("");
    this->lineedit_3rd_author->setText("");

    // many more authors
    if(multiple_authors)
    {
        this->author_4->setText("");
        this->author_5->setText("");
        this->author_6->setText("");
        this->author_7->setText("");
        this->author_8->setText("");
        this->author_9->setText("");
        this->author_10->setText("");
    }
}

void PaperCitationWindow::setup_labels_and_entries()
{
    this->grid = new QGridLayout;
    this->grid->addWidget(ui_2->label_author,0,0);
    this->grid->addWidget(ui_2->lineedit_author,0,1);
    this->grid->addWidget(ui_2->label_year,6,0);
    this->grid->addWidget(ui_2->lineedit_year,6,1,1,2);
    this->grid->addWidget(ui_2->label_title,7,0);
    this->grid->addWidget(ui_2->lineedit_title,7,1,1,2);
    this->grid->addWidget(ui_2->label_details,8,0);
    this->grid->addWidget(ui_2->lineedit_details,8,1,1,2);
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

    QTimer::singleShot(0,ui_2->label_copy,&QLabel::show);
    QTimer::singleShot(1500,ui_2->label_copy,&QLabel::hide);
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

    this->format = "";

    // exit if no author and year are specified
    if(check_if_entries_empty())
        return;

    this->format = format_author(author,this->style);

    if(!multiple_authors)
        format_extra_authors_in_normal_mode();
    else
        format_many_more_authors();

    if(this->style == "Harvard Style")  
        this->format += " (" + year + "), \"" + format_title(title) + "\", " + format_title(details);
    else if(this->style == "APA Style")
        this->format += " (" + year + "). " + format_title(title) + ". " + format_title(details);

    ui_2->label_result->setText(format);
    ui_2->label_result->setTextInteractionFlags(Qt::TextSelectableByMouse);
}

void PaperCitationWindow::format_extra_authors_in_normal_mode()
{
    QString author_2nd;
    QString author_3rd;
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
}

void PaperCitationWindow::init_many_more_authors()
{
    // initialize spinbox area
    Citation::clear_layout(ui_2->horizontalLayout_6);
    ui_2->spinbox->setRange(1,10);
    QLabel *many_authors_label = new QLabel("Select number of authors -> ");
    many_authors_label->setFont(ui_2->groupBox->font());
    ui_2->horizontalLayout_6->addWidget(many_authors_label);
    ui_2->horizontalLayout_6->addWidget(ui_2->spinbox);
    ui_2->spinbox->show();
    this->setFixedSize(QSize(this->width(),this->height() + 60));
    QObject::connect(ui_2->spinbox,SIGNAL(valueChanged(int)),this,SLOT(mod_gui_of_many_more_authors()));

    // create all the extra authors's entries
    this->lineedit_2nd_author = new QLineEdit(this);
    this->lineedit_3rd_author = new QLineEdit(this);
    this->grid->addWidget(lineedit_2nd_author,0,2);
    this->grid->addWidget(lineedit_3rd_author,1,1);
    this->author_4 = new QLineEdit(this);
    this->author_4->setText("");
    this->grid->addWidget(author_4,1,2);
    this->author_5 = new QLineEdit(this);
    this->author_5->setText("");
    this->grid->addWidget(author_5,2,1);
    this->author_6 = new QLineEdit(this);
    this->author_6->setText("");
    this->grid->addWidget(author_6,2,2);
    this->author_7 = new QLineEdit(this);
    this->author_7->setText("");
    this->grid->addWidget(author_7,3,1);
    this->author_8 = new QLineEdit(this);
    this->author_8->setText("");
    this->grid->addWidget(author_8,3,2);
    this->author_9 = new QLineEdit(this);
    this->author_9->setText("");
    this->grid->addWidget(author_9,4,1);
    this->author_10 = new QLineEdit(this);
    this->author_10->setText("");
    this->grid->addWidget(author_10,4,2);

    // hide them all by default
    this->lineedit_2nd_author->hide();
    this->lineedit_3rd_author->hide();
    this->author_4->hide();
    this->author_5->hide();
    this->author_6->hide();
    this->author_7->hide();
    this->author_8->hide();
    this->author_9->hide();
    this->author_10->hide();

    // add some indicative labels as well
    this->more_authors_1 = new QLabel("Authors");
    this->grid->addWidget(more_authors_1,1,0);
    this->more_authors_1->hide();
    this->more_authors_2 = new QLabel("Authors");
    this->grid->addWidget(more_authors_2,2,0);
    this->more_authors_2->hide();
    this->more_authors_3 = new QLabel("Authors");
    this->grid->addWidget(more_authors_3,3,0);
    this->more_authors_3->hide();
    this->more_authors_4 = new QLabel("Authors");
    this->grid->addWidget(more_authors_4,4,0);
    this->more_authors_4->hide();

    // initialize author monitoring variables
    this->one_author = true;
    this->two_author = false;
    this->three_author = false;
    this->four_author = false;
    this->five_author = false;
    this->six_author = false;
    this->seven_author = false;
    this->eight_author = false;
    this->nine_author = false;
    this->ten_author = false;

    // handle helpful text
    ui_2->label_author->setText("Authors");
    ui_2->lineedit_author->setPlaceholderText("1st author");
    this->lineedit_2nd_author->setPlaceholderText("2nd author");
    this->lineedit_3rd_author->setPlaceholderText("3rd author");
    this->author_4->setPlaceholderText("4th author");
    this->author_5->setPlaceholderText("5th author");
    this->author_6->setPlaceholderText("6th author");
    this->author_7->setPlaceholderText("7th author");
    this->author_8->setPlaceholderText("8th author");
    this->author_9->setPlaceholderText("9th author");
    this->author_10->setPlaceholderText("10th author");
}

void PaperCitationWindow::mod_gui_of_many_more_authors(){

    int number_of_authors = ui_2->spinbox->text().toInt();
    switch(number_of_authors)
    {
        case 1:
            one_author_in_many_more_authors();
            break;
        case 2:
            two_authors_in_many_more_authors();
            break;
        case 3:
            three_authors_in_many_more_authors();
            break;
        case 4:
            four_authors_in_many_more_authors();
            break;
        case 5:
            five_authors_in_many_more_authors();
            break;
        case 6:
            six_authors_in_many_more_authors();
            break;
        case 7:
            seven_authors_in_many_more_authors();
            break;
        case 8:
            eight_authors_in_many_more_authors();
            break;
        case 9:
            nine_authors_in_many_more_authors();
            break;
        case 10:
            ten_authors_in_many_more_authors();
            break;
        default:
            break;
    }
}

void PaperCitationWindow::one_author_in_many_more_authors()
{
    // monitor authors
    this->one_author = true;
    this->two_author = false;
    this->three_author = false;
    this->four_author = false;
    this->five_author = false;
    this->six_author = false;
    this->seven_author = false;
    this->eight_author = false;
    this->nine_author = false;
    this->ten_author = false;
    // gui modifications
    this->lineedit_2nd_author->hide();
    this->lineedit_3rd_author->hide();
    this->author_4->hide();
    this->author_5->hide();
    this->author_6->hide();
    this->author_7->hide();
    this->author_8->hide();
    this->author_9->hide();
    this->author_10->hide();
    this->more_authors_1->hide();
    this->more_authors_2->hide();
    this->more_authors_3->hide();
    this->more_authors_4->hide();
}

void PaperCitationWindow::two_authors_in_many_more_authors()
{
    // monitor authors
    this->one_author = true;
    this->two_author = true;
    this->three_author = false;
    this->four_author = false;
    this->five_author = false;
    this->six_author = false;
    this->seven_author = false;
    this->eight_author = false;
    this->nine_author = false;
    this->ten_author = false;
    // gui modifications
    this->lineedit_2nd_author->show();
    this->lineedit_3rd_author->hide();
    this->author_4->hide();
    this->author_5->hide();
    this->author_6->hide();
    this->author_7->hide();
    this->author_8->hide();
    this->author_9->hide();
    this->author_10->hide();
    this->more_authors_1->hide();
    this->more_authors_2->hide();
    this->more_authors_3->hide();
    this->more_authors_4->hide();
}

void PaperCitationWindow::three_authors_in_many_more_authors()
{
    // monitor authors
    this->one_author = true;
    this->two_author = true;
    this->three_author = true;
    this->four_author = false;
    this->five_author = false;
    this->six_author = false;
    this->seven_author = false;
    this->eight_author = false;
    this->nine_author = false;
    this->ten_author = false;
    // gui modifications
    this->lineedit_2nd_author->show();
    this->lineedit_3rd_author->show();
    this->more_authors_1->show();
    this->author_4->hide();
    this->author_5->hide();
    this->author_6->hide();
    this->author_7->hide();
    this->author_8->hide();
    this->author_9->hide();
    this->author_10->hide();
    this->more_authors_1->show();
    this->more_authors_2->hide();
    this->more_authors_3->hide();
    this->more_authors_4->hide();
}

void PaperCitationWindow::four_authors_in_many_more_authors()
{
    // monitor authors
    this->one_author = true;
    this->two_author = true;
    this->three_author = true;
    this->four_author = true;
    this->five_author = false;
    this->six_author = false;
    this->seven_author = false;
    this->eight_author = false;
    this->nine_author = false;
    this->ten_author = false;
    // gui modifications
    this->lineedit_2nd_author->show();
    this->lineedit_3rd_author->show();
    this->author_4->show();
    this->author_5->hide();
    this->author_6->hide();
    this->author_7->hide();
    this->author_8->hide();
    this->author_9->hide();
    this->author_10->hide();
    this->more_authors_1->show();
    this->more_authors_2->hide();
    this->more_authors_3->hide();
    this->more_authors_4->hide();
}

void PaperCitationWindow::five_authors_in_many_more_authors()
{
    // monitor authors
    this->one_author = true;
    this->two_author = true;
    this->three_author = true;
    this->four_author = true;
    this->five_author = true;
    this->six_author = false;
    this->seven_author = false;
    this->eight_author = false;
    this->nine_author = false;
    this->ten_author = false;
    // gui modifications
    this->lineedit_2nd_author->show();
    this->lineedit_3rd_author->show();
    this->author_4->show();
    this->author_5->show();
    this->author_6->hide();
    this->author_7->hide();
    this->author_8->hide();
    this->author_9->hide();
    this->author_10->hide();
    this->more_authors_1->show();
    this->more_authors_2->show();
    this->more_authors_3->hide();
    this->more_authors_4->hide();
}

void PaperCitationWindow::six_authors_in_many_more_authors()
{
    // monitor authors
    this->one_author = true;
    this->two_author = true;
    this->three_author = true;
    this->four_author = true;
    this->five_author = true;
    this->six_author = true;
    this->seven_author = false;
    this->eight_author = false;
    this->nine_author = false;
    this->ten_author = false;
    // gui modifications
    this->lineedit_2nd_author->show();
    this->lineedit_3rd_author->show();
    this->author_4->show();
    this->author_5->show();
    this->author_6->show();
    this->author_7->hide();
    this->author_8->hide();
    this->author_9->hide();
    this->author_10->hide();
    this->more_authors_1->show();
    this->more_authors_2->show();
    this->more_authors_3->hide();
    this->more_authors_4->hide();
}

void PaperCitationWindow::seven_authors_in_many_more_authors()
{
    // monitor authors
    this->one_author = true;
    this->two_author = true;
    this->three_author = true;
    this->four_author = true;
    this->five_author = true;
    this->six_author = true;
    this->seven_author = true;
    this->eight_author = false;
    this->nine_author = false;
    this->ten_author = false;
    // gui modifications
    this->lineedit_2nd_author->show();
    this->lineedit_3rd_author->show();
    this->author_4->show();
    this->author_5->show();
    this->author_6->show();
    this->author_7->show();
    this->author_8->hide();
    this->author_9->hide();
    this->author_10->hide();
    this->more_authors_1->show();
    this->more_authors_2->show();
    this->more_authors_3->show();
    this->more_authors_4->hide();
}

void PaperCitationWindow::eight_authors_in_many_more_authors()
{
    // monitor authors
    this->one_author = true;
    this->two_author = true;
    this->three_author = true;
    this->four_author = true;
    this->five_author = true;
    this->six_author = true;
    this->seven_author = true;
    this->eight_author = true;
    this->nine_author = false;
    this->ten_author = false;
    // gui modifications
    this->lineedit_2nd_author->show();
    this->lineedit_3rd_author->show();
    this->author_4->show();
    this->author_5->show();
    this->author_6->show();
    this->author_7->show();
    this->author_8->show();
    this->author_9->hide();
    this->author_10->hide();
    this->more_authors_1->show();
    this->more_authors_2->show();
    this->more_authors_3->show();
    this->more_authors_4->hide();
}

void PaperCitationWindow::nine_authors_in_many_more_authors()
{
    // monitor authors
    this->one_author = true;
    this->two_author = true;
    this->three_author = true;
    this->four_author = true;
    this->five_author = true;
    this->six_author = true;
    this->seven_author = true;
    this->eight_author = true;
    this->nine_author = true;
    this->ten_author = false;
    // gui modifications
    this->lineedit_2nd_author->show();
    this->lineedit_3rd_author->show();
    this->author_4->show();
    this->author_5->show();
    this->author_6->show();
    this->author_7->show();
    this->author_8->show();
    this->author_9->show();
    this->author_10->hide();
    this->more_authors_1->show();
    this->more_authors_2->show();
    this->more_authors_3->show();
    this->more_authors_4->show();
}

void PaperCitationWindow::ten_authors_in_many_more_authors()
{
    // monitor authors
    this->one_author = true;
    this->two_author = true;
    this->three_author = true;
    this->four_author = true;
    this->five_author = true;
    this->six_author = true;
    this->seven_author = true;
    this->eight_author = true;
    this->nine_author = true;
    this->ten_author = true;
    // gui modifications
    this->lineedit_2nd_author->show();
    this->lineedit_3rd_author->show();
    this->author_4->show();
    this->author_5->show();
    this->author_6->show();
    this->author_7->show();
    this->author_8->show();
    this->author_9->show();
    this->author_10->show();
    this->more_authors_1->show();
    this->more_authors_2->show();
    this->more_authors_3->show();
    this->more_authors_4->show();
}

void PaperCitationWindow::format_many_more_authors()
{
    if(two_author)
    {
        QString second_author = this->lineedit_2nd_author->text();
        if(!three_author)
            this->format += ", & " + format_author(second_author,this->style);
        else
            this->format += ", " + format_author(second_author,this->style);
    }
    if(three_author)
    {
        QString third_author = this->lineedit_3rd_author->text();
        if(!four_author)
            this->format += ", & " + format_author(third_author,this->style);
        else
            this->format += ", " + format_author(third_author,this->style);
    }
    if(four_author)
    {
        QString fourth_author = this->author_4->text();
        if(!five_author)
            this->format += ", & " + format_author(fourth_author,this->style);
        else
            this->format += ", " + format_author(fourth_author,this->style);
    }
    if(five_author)
    {
        QString fifth_author = this->author_5->text();
        if(!six_author)
            this->format += ", & " + format_author(fifth_author,this->style);
        else
            this->format += ", " + format_author(fifth_author,this->style);
    }
    if(six_author)
    {
        QString sixth_author = this->author_6->text();
        if(!seven_author)
            this->format += ", & " + format_author(sixth_author,this->style);
        else
            this->format += ", " + format_author(sixth_author,this->style);
    }
    if(seven_author)
    {
        QString seventh_author = this->author_7->text();
        if(!eight_author)
            this->format += ", & " + format_author(seventh_author,this->style);
        else
            this->format += ", " + format_author(seventh_author,this->style);
    }
    if(eight_author)
    {
        QString eighth_author = this->author_8->text();
        if(!nine_author)
            this->format += ", & " + format_author(eighth_author,this->style);
        else
            this->format += ", " + format_author(eighth_author,this->style);
    }
    if(nine_author)
    {
        QString nineth_author = this->author_9->text();
        if(!ten_author)
            this->format += ", & " + format_author(nineth_author,this->style);
        else
            this->format += ", " + format_author(nineth_author,this->style);
    }
    if(ten_author)
    {
        QString tenth_author = this->author_10->text();
        this->format += ", & " + format_author(tenth_author,this->style);
    }
}

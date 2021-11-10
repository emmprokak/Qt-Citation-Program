#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "papercitationwindow.h"
#include "bookcitationwindow.h"
#include "chaptercitationwindow.h"
#include "infowindow.h"
#include <QPixmap>
#include <QString>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->prepare_menu_gui();
    this->setWindowTitle("Qt Citation Program");
    this->setFixedSize(this->width(),this->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_book_clicked()
{
    BookCitationWindow *book_citation = new BookCitationWindow(this,ui->comboBox->currentText());
    book_citation->show();
}

void MainWindow::on_button_paper_clicked()
{
    PaperCitationWindow *paper_citation = new PaperCitationWindow(this,ui->comboBox->currentText());
    paper_citation->show();
}

void MainWindow::on_button_chapter_clicked()
{
    ChapterCitationWindow *chapter_citation = new ChapterCitationWindow(this,ui->comboBox->currentText());
    chapter_citation->show();
}

void MainWindow::on_button_info_clicked()
{
    InfoWindow *info_window = new InfoWindow();
    info_window->show();
}

void MainWindow::prepare_menu_gui()
{
    //this->setFixedSize(this->width(),this->height());
    //icons
    QPixmap img_book(":/book.png");
    QPixmap img_paper(":/paper.png");
    QPixmap img_chapter(":/chapter.png");
    QPixmap img_info(":/info_small.png");

    QIcon icon_book(img_book);
    QIcon icon_paper(img_paper);
    QIcon icon_chapter(img_chapter);
    QIcon icon_info(img_info);

    ui->button_book->setIcon(icon_book);
    ui->button_book->setFixedSize(112,112);
    ui->button_book->setIconSize(QSize(106,106));
    ui->button_paper->setIcon(icon_paper);
    ui->button_paper->setFixedSize(112,112);
    ui->button_paper->setIconSize(QSize(106,106));
    ui->button_chapter->setIcon(icon_chapter);
    ui->button_chapter->setFixedSize(112,112);
    ui->button_chapter->setIconSize(QSize(106,106));
    ui->button_info->setIcon(icon_info);
    ui->button_info->setFixedSize(80,76);
    ui->button_info->setIconSize(QSize(74,70));

    //combobox options
    ui->comboBox->addItem("Harvard Style");
    ui->comboBox->addItem("APA Style");

    //help tips
    ui->button_paper->setToolTip("Cite paper");
    ui->button_book->setToolTip("Cite book");
    ui->button_chapter->setToolTip("Cite chapter-in-book");
    ui->button_info->setToolTip("About...");
    ui->comboBox->setToolTip("Choose citation style");
}




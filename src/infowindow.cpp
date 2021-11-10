#include "infowindow.h"
#include "ui_infowindow.h"

InfoWindow::InfoWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_5(new Ui::InfoWindow)
{
    ui_5->setupUi(this);
    this->setWindowTitle("About");
    this->setFixedSize(this->width(),this->height());
    QPixmap img_info(":/info_smaller.png");
    ui_5->label_icon->setPixmap(img_info);
    ui_5->text->setReadOnly(true);
}

InfoWindow::~InfoWindow()
{
    delete ui_5;
}

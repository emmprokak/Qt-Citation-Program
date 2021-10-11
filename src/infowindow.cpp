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
#include "infowindow.h"
#include "ui_infowindow.h"

InfoWindow::InfoWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_5(new Ui::InfoWindow)
{
    ui_5->setupUi(this);
    this->setWindowTitle("About");
    this->setFixedSize(this->width(),this->height());
    QPixmap img_info(":/info_small.png");
    ui_5->label_icon->setPixmap(img_info);
    ui_5->text->setReadOnly(true);
}

InfoWindow::~InfoWindow()
{
    delete ui_5;
}

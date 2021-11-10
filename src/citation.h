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

#ifndef CITATION_H
#define CITATION_H
#include <QString>
#include <QMainWindow>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

//the citation parent class includes basic citation functions that all citation windows share
class Citation
{
public:
    Citation();
    QString& format_author(QString& name, QString& style);
    QString& format_title(QString& name);
    //the format citation function will be overriden by every child class
    virtual void format_citation() = 0;

protected:
    QGridLayout *grid;
    QLabel *label_2nd_author;
    QLabel *label_3rd_author;
    QLineEdit *lineedit_2nd_author;
    QLineEdit *lineedit_3rd_author;

    bool one_author = true;
    bool two_author = false;
    bool three_author = false;
};

#endif // CITATION_H

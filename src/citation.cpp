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

#include "citation.h"
#include <QString>
#include <QStringList>
#include <QPushButton>

Citation::Citation(){}

QString& Citation::format_author(QString &name, QString &style)
{
    if(style == "Harvard Style")
    {
        if(name.contains(' '))
        {
            QStringList elements = name.split(' ');
            name = elements[0][0].toUpper();
            for(int i = 1; elements[0][i] != NULL; i++)
                name += elements[0][i].toLower();
            name += ' ' + elements[1][0].toUpper() + '.';
        }
        else
        {
            for(int i = 0; name[i] != NULL; i++)
                name[i] = name[i].toUpper();
        }
    }

    else if(style == "APA Style")
    {
        if(name.contains(' '))
        {
            QStringList elements = name.split(' ');
            name = elements[0][0].toUpper();
            for(int i = 1; elements[0][i] != NULL; i++)
                name += elements[0][i].toLower();
            name += ", ";
            name += elements[1][0].toUpper() + '.';
        }
        else
        {
            for(int i = 0; name[i] != NULL; i++)
                name[i] = name[i].toUpper();
        }
    }
    return name;
}
QString& Citation::format_title(QString& title)
{
    int i = 0, words = 1;
    //count words
    while(title[i] != NULL)
    {
        if(title[i] == ' ')
            ++words;
        ++i;
    }
    //figure out capital letters
    QStringList elements = title.split(' ');
    for(int j = 0; j < words; j++)
    {
        if(elements[j] == "or" || (elements[j] == "the" && j != 0) ||
                elements[j] == "of" || elements[j] == "and" ||
                elements[j] == "in" || elements[j] == "at")
            elements[j][0] = elements[j][0].toLower();
        else
            elements[j][0] = elements[j][0].toUpper();
    }
    //format finalized title
    title = "";
    for(int j = 0; j < words; j++)
    {
        title += elements[j];
        //no space at the end of the title
        if(j != words - 1)
            title += " ";
    }

    return title;
}

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
#ifndef PaperCitationWindow_H
#define PaperCitationWindow_H

#include <QMainWindow>
#include <QString>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include "citation.h"

namespace Ui {
class PaperCitationWindow;
}

class PaperCitationWindow : public QMainWindow, public Citation
{
    Q_OBJECT

public:
    explicit PaperCitationWindow(QWidget *parent = nullptr, const QString& style = "");
    ~PaperCitationWindow();
    Ui::PaperCitationWindow* get_child_ui(void) const {return ui_2;}
    void format_citation();
    void monitor_active_radio_button();
    void setup_labels_and_entries();
    void prepare_gui_for_multiple_authors();
    void button_back_icon();

private:
    Ui::PaperCitationWindow *ui_2;
    QString style;
    QString format;

private slots:
    void on_button_go_clicked();

    void on_button_back_clicked();

    void on_button_copy_clicked();

    void on_radio_2nd_clicked();

    void on_radio_3rd_clicked();

    void on_radio_1st_clicked();
};


#endif // PaperCitationWindow_H

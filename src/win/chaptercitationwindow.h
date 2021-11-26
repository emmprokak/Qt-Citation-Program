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

#ifndef CHAPTERCITATIONWINDOW_H
#define CHAPTERCITATIONWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include "citation.h"

namespace Ui {
class ChapterCitationWindow;
}

class ChapterCitationWindow : public QMainWindow, public Citation
{
    Q_OBJECT

public:
    explicit ChapterCitationWindow(QWidget *parent = nullptr, const QString& style = "");
    ~ChapterCitationWindow();
    Ui::ChapterCitationWindow* get_child_ui(void) const {return ui_4;}


private:
    Ui::ChapterCitationWindow *ui_4;
    QString style;
    QString format;

    QGridLayout *grid_in;
    QLabel* label_2nd_author_in;
    QLabel* label_3rd_author_in;
    QLineEdit* lineedit_2nd_author_in;
    QLineEdit* lineedit_3rd_author_in;
    bool one_author_in = true;
    bool two_author_in = false;
    bool three_author_in = false;

    void setup_labels_and_entries();
    void setup_in_labels_and_entries();
    void prepare_gui_for_multiple_authors();
    void prepare_gui_for_multiple_authors_in();
    void monitor_active_radio_button();
    void monitor_active_radio_button_in();
    void button_back_icon();
    void format_citation();
    bool check_if_entries_empty();
    bool check_if_entries_empty_in();
    void clear_entries();
    void clear_entries_in();
    void init_gui();

private slots:
    void on_radio_2nd_clicked();

    void on_radio_3rd_clicked();

    void on_radio_1st_clicked();

    void on_radio_2nd_in_clicked();

    void on_radio_3rd_in_clicked();

    void on_radio_1st_in_clicked();

    void on_button_copy_clicked();

    void on_button_go_clicked();

    void on_button_back_clicked();
    void on_button_reset_clicked();
    void on_button_reset_in_clicked();
};

#endif // CHAPTERCITATIONWINDOW_H

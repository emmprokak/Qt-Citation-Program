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
#include <QSpinBox>
#include "citation.h"

namespace Ui {
class PaperCitationWindow;
}

class PaperCitationWindow : public QMainWindow, public Citation
{
    Q_OBJECT

public:
    explicit PaperCitationWindow(QWidget *parent = nullptr, const QString& style = "", bool multiple_authors = false);
    ~PaperCitationWindow();
    Ui::PaperCitationWindow* get_child_ui(void) const {return ui_2;}


private:
    Ui::PaperCitationWindow *ui_2;
    QString style;
    QString format;
    QSpinBox *spin;

    void format_citation();
    void monitor_active_radio_button();
    void setup_labels_and_entries();
    void prepare_gui_for_multiple_authors();
    void format_extra_authors_in_normal_mode();
    void button_back_icon();
    bool check_if_entries_empty();
    void clear_entries();
    void init_many_more_authors();
    void handle_many_more_authors();
    void init_gui();

    // booleans for many more authors
    bool multiple_authors;
    bool four_author, five_author, six_author,
         seven_author, eight_author, nine_author,
         ten_author;

    // labels and lineedits for many more authors
    QLineEdit *author_4, *author_5, *author_6,
              *author_7, *author_8, *author_9,
              *author_10;
    QLabel *more_authors_1, *more_authors_2,
           *more_authors_3, *more_authors_4;

    // methods for many more authors
    void one_author_in_many_more_authors();
    void two_authors_in_many_more_authors();
    void three_authors_in_many_more_authors();
    void four_authors_in_many_more_authors();
    void five_authors_in_many_more_authors();
    void six_authors_in_many_more_authors();
    void seven_authors_in_many_more_authors();
    void eight_authors_in_many_more_authors();
    void nine_authors_in_many_more_authors();
    void ten_authors_in_many_more_authors();
    void format_many_more_authors();

private slots:
    void on_button_go_clicked();

    void on_button_back_clicked();

    void on_button_copy_clicked();

    void on_radio_2nd_clicked();

    void on_radio_3rd_clicked();

    void on_radio_1st_clicked();

    void on_button_reset_clicked();

    void mod_gui_of_many_more_authors();
};


#endif // PaperCitationWindow_H

#ifndef BOOKCITATIONWINDOW_H
#define BOOKCITATIONWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QString>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include "citation.h"

namespace Ui {
class BookCitationWindow;
}

class BookCitationWindow : public QMainWindow, public Citation
{
    Q_OBJECT

public:
    explicit BookCitationWindow(QWidget *parent = nullptr, const QString& style = "");
    ~BookCitationWindow();
    Ui::BookCitationWindow* get_child_ui(void) const {return ui_3;}
    void format_citation();
    void monitor_active_radio_button();
    void setup_labels_and_entries();
    void prepare_gui_for_multiple_authors();
    void button_back_icon();

private:
    Ui::BookCitationWindow *ui_3;
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


#endif

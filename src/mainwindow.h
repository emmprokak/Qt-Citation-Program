#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void prepare_menu_gui();

private:
    Ui::MainWindow *ui;

private slots:
    void on_button_book_clicked();

    void on_button_paper_clicked();

    void on_button_chapter_clicked();

    void on_button_info_clicked();
};
#endif // MAINWINDOW_H

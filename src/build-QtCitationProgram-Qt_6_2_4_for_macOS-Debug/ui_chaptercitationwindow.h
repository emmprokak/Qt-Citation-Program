/********************************************************************************
** Form generated from reading UI file 'chaptercitationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAPTERCITATIONWINDOW_H
#define UI_CHAPTERCITATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChapterCitationWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_author;
    QLabel *label_year;
    QLabel *label_title;
    QLineEdit *lineedit_author;
    QLineEdit *lineedit_year;
    QLineEdit *lineedit_title;
    QWidget *layoutWidget;
    QHBoxLayout *radio_layout;
    QRadioButton *radio_1st;
    QRadioButton *radio_2nd;
    QRadioButton *radio_3rd;
    QGroupBox *groupBox_in;
    QLabel *label_title_in;
    QLabel *label_year_in;
    QLineEdit *lineedit_author_in;
    QLabel *label_place_in;
    QLineEdit *lineedit_place_in;
    QLineEdit *lineedit_year_in;
    QLineEdit *lineedit_publisher_in;
    QLabel *label_publisher_in;
    QLineEdit *lineedit_title_in;
    QLabel *label_author_in;
    QWidget *layoutWidget_2;
    QHBoxLayout *radio_layout_2;
    QRadioButton *radio_1st_in;
    QRadioButton *radio_2nd_in;
    QRadioButton *radio_3rd_in;
    QPushButton *button_back;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *button_copy;
    QPushButton *button_go;
    QLabel *label_copy;
    QLabel *label_result;
    QPushButton *button_reset;
    QPushButton *button_reset_in;
    QMenuBar *menubar;

    void setupUi(QMainWindow *ChapterCitationWindow)
    {
        if (ChapterCitationWindow->objectName().isEmpty())
            ChapterCitationWindow->setObjectName(QString::fromUtf8("ChapterCitationWindow"));
        ChapterCitationWindow->resize(383, 715);
        centralwidget = new QWidget(ChapterCitationWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 301, 191));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        label_author = new QLabel(groupBox);
        label_author->setObjectName(QString::fromUtf8("label_author"));
        label_author->setGeometry(QRect(140, 80, 51, 21));
        label_author->setFont(font);
        label_year = new QLabel(groupBox);
        label_year->setObjectName(QString::fromUtf8("label_year"));
        label_year->setGeometry(QRect(150, 80, 61, 21));
        label_year->setFont(font);
        label_title = new QLabel(groupBox);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(150, 80, 51, 21));
        label_title->setFont(font);
        lineedit_author = new QLineEdit(groupBox);
        lineedit_author->setObjectName(QString::fromUtf8("lineedit_author"));
        lineedit_author->setGeometry(QRect(130, 80, 113, 21));
        lineedit_author->setFont(font);
        lineedit_year = new QLineEdit(groupBox);
        lineedit_year->setObjectName(QString::fromUtf8("lineedit_year"));
        lineedit_year->setGeometry(QRect(130, 80, 113, 21));
        lineedit_year->setFont(font);
        lineedit_title = new QLineEdit(groupBox);
        lineedit_title->setObjectName(QString::fromUtf8("lineedit_title"));
        lineedit_title->setGeometry(QRect(130, 80, 113, 21));
        lineedit_title->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 220, 337, 24));
        layoutWidget->setFont(font);
        radio_layout = new QHBoxLayout(layoutWidget);
        radio_layout->setObjectName(QString::fromUtf8("radio_layout"));
        radio_layout->setContentsMargins(0, 0, 0, 0);
        radio_1st = new QRadioButton(layoutWidget);
        radio_1st->setObjectName(QString::fromUtf8("radio_1st"));
        QFont font1;
        font1.setPointSize(14);
        radio_1st->setFont(font1);

        radio_layout->addWidget(radio_1st);

        radio_2nd = new QRadioButton(layoutWidget);
        radio_2nd->setObjectName(QString::fromUtf8("radio_2nd"));
        radio_2nd->setFont(font1);

        radio_layout->addWidget(radio_2nd);

        radio_3rd = new QRadioButton(layoutWidget);
        radio_3rd->setObjectName(QString::fromUtf8("radio_3rd"));
        radio_3rd->setFont(font1);

        radio_layout->addWidget(radio_3rd);

        groupBox_in = new QGroupBox(centralwidget);
        groupBox_in->setObjectName(QString::fromUtf8("groupBox_in"));
        groupBox_in->setGeometry(QRect(10, 250, 301, 251));
        groupBox_in->setFont(font1);
        label_title_in = new QLabel(groupBox_in);
        label_title_in->setObjectName(QString::fromUtf8("label_title_in"));
        label_title_in->setGeometry(QRect(80, 80, 20, 22));
        label_title_in->setFont(font);
        label_year_in = new QLabel(groupBox_in);
        label_year_in->setObjectName(QString::fromUtf8("label_year_in"));
        label_year_in->setGeometry(QRect(120, 80, 22, 22));
        label_year_in->setFont(font);
        lineedit_author_in = new QLineEdit(groupBox_in);
        lineedit_author_in->setObjectName(QString::fromUtf8("lineedit_author_in"));
        lineedit_author_in->setGeometry(QRect(30, 80, 147, 22));
        lineedit_author_in->setFont(font);
        label_place_in = new QLabel(groupBox_in);
        label_place_in->setObjectName(QString::fromUtf8("label_place_in"));
        label_place_in->setGeometry(QRect(60, 80, 41, 22));
        label_place_in->setFont(font);
        lineedit_place_in = new QLineEdit(groupBox_in);
        lineedit_place_in->setObjectName(QString::fromUtf8("lineedit_place_in"));
        lineedit_place_in->setGeometry(QRect(30, 80, 113, 21));
        lineedit_place_in->setFont(font);
        lineedit_year_in = new QLineEdit(groupBox_in);
        lineedit_year_in->setObjectName(QString::fromUtf8("lineedit_year_in"));
        lineedit_year_in->setGeometry(QRect(30, 80, 136, 22));
        lineedit_year_in->setFont(font);
        lineedit_publisher_in = new QLineEdit(groupBox_in);
        lineedit_publisher_in->setObjectName(QString::fromUtf8("lineedit_publisher_in"));
        lineedit_publisher_in->setGeometry(QRect(30, 80, 146, 22));
        lineedit_publisher_in->setFont(font);
        label_publisher_in = new QLabel(groupBox_in);
        label_publisher_in->setObjectName(QString::fromUtf8("label_publisher_in"));
        label_publisher_in->setGeometry(QRect(60, 80, 61, 21));
        label_publisher_in->setFont(font);
        lineedit_title_in = new QLineEdit(groupBox_in);
        lineedit_title_in->setObjectName(QString::fromUtf8("lineedit_title_in"));
        lineedit_title_in->setGeometry(QRect(30, 80, 134, 22));
        lineedit_title_in->setFont(font);
        label_author_in = new QLabel(groupBox_in);
        label_author_in->setObjectName(QString::fromUtf8("label_author_in"));
        label_author_in->setGeometry(QRect(70, 80, 33, 22));
        label_author_in->setFont(font);
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 510, 337, 24));
        layoutWidget_2->setFont(font);
        radio_layout_2 = new QHBoxLayout(layoutWidget_2);
        radio_layout_2->setObjectName(QString::fromUtf8("radio_layout_2"));
        radio_layout_2->setContentsMargins(0, 0, 0, 0);
        radio_1st_in = new QRadioButton(layoutWidget_2);
        radio_1st_in->setObjectName(QString::fromUtf8("radio_1st_in"));
        radio_1st_in->setFont(font1);

        radio_layout_2->addWidget(radio_1st_in);

        radio_2nd_in = new QRadioButton(layoutWidget_2);
        radio_2nd_in->setObjectName(QString::fromUtf8("radio_2nd_in"));
        radio_2nd_in->setFont(font1);

        radio_layout_2->addWidget(radio_2nd_in);

        radio_3rd_in = new QRadioButton(layoutWidget_2);
        radio_3rd_in->setObjectName(QString::fromUtf8("radio_3rd_in"));
        radio_3rd_in->setFont(font1);

        radio_layout_2->addWidget(radio_3rd_in);

        button_back = new QPushButton(centralwidget);
        button_back->setObjectName(QString::fromUtf8("button_back"));
        button_back->setGeometry(QRect(10, 560, 61, 31));
        button_back->setFont(font);
        button_back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#000000;\n"
"}\n"
"\n"
"QPushButton:Pressed{\n"
"background-color:#24c8c8;\n"
"}"));
        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(200, 560, 168, 35));
        layoutWidget_3->setFont(font);
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        button_copy = new QPushButton(layoutWidget_3);
        button_copy->setObjectName(QString::fromUtf8("button_copy"));
        button_copy->setFont(font);

        horizontalLayout_5->addWidget(button_copy);

        button_go = new QPushButton(layoutWidget_3);
        button_go->setObjectName(QString::fromUtf8("button_go"));
        button_go->setFont(font);

        horizontalLayout_5->addWidget(button_go);

        label_copy = new QLabel(centralwidget);
        label_copy->setObjectName(QString::fromUtf8("label_copy"));
        label_copy->setGeometry(QRect(180, 540, 121, 16));
        label_copy->setFont(font1);
        label_result = new QLabel(centralwidget);
        label_result->setObjectName(QString::fromUtf8("label_result"));
        label_result->setGeometry(QRect(20, 620, 341, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cambria")});
        font2.setPointSize(16);
        label_result->setFont(font2);
        button_reset = new QPushButton(centralwidget);
        button_reset->setObjectName(QString::fromUtf8("button_reset"));
        button_reset->setGeometry(QRect(330, 80, 31, 101));
        button_reset->setFont(font1);
        button_reset_in = new QPushButton(centralwidget);
        button_reset_in->setObjectName(QString::fromUtf8("button_reset_in"));
        button_reset_in->setGeometry(QRect(330, 350, 31, 101));
        button_reset_in->setFont(font1);
        ChapterCitationWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChapterCitationWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 383, 24));
        ChapterCitationWindow->setMenuBar(menubar);
        QWidget::setTabOrder(lineedit_author, lineedit_year);
        QWidget::setTabOrder(lineedit_year, lineedit_title);
        QWidget::setTabOrder(lineedit_title, lineedit_author_in);
        QWidget::setTabOrder(lineedit_author_in, lineedit_year_in);
        QWidget::setTabOrder(lineedit_year_in, lineedit_title_in);
        QWidget::setTabOrder(lineedit_title_in, lineedit_place_in);
        QWidget::setTabOrder(lineedit_place_in, lineedit_publisher_in);
        QWidget::setTabOrder(lineedit_publisher_in, button_go);
        QWidget::setTabOrder(button_go, radio_1st);
        QWidget::setTabOrder(radio_1st, radio_2nd);
        QWidget::setTabOrder(radio_2nd, radio_3rd);
        QWidget::setTabOrder(radio_3rd, radio_1st_in);
        QWidget::setTabOrder(radio_1st_in, radio_2nd_in);
        QWidget::setTabOrder(radio_2nd_in, radio_3rd_in);
        QWidget::setTabOrder(radio_3rd_in, button_copy);
        QWidget::setTabOrder(button_copy, button_back);

        retranslateUi(ChapterCitationWindow);

        QMetaObject::connectSlotsByName(ChapterCitationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChapterCitationWindow)
    {
        ChapterCitationWindow->setWindowTitle(QCoreApplication::translate("ChapterCitationWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ChapterCitationWindow", "Input data for citation", nullptr));
        label_author->setText(QCoreApplication::translate("ChapterCitationWindow", "Author", nullptr));
        label_year->setText(QCoreApplication::translate("ChapterCitationWindow", "Year", nullptr));
        label_title->setText(QCoreApplication::translate("ChapterCitationWindow", "Title", nullptr));
        radio_1st->setText(QCoreApplication::translate("ChapterCitationWindow", "One Author", nullptr));
        radio_2nd->setText(QCoreApplication::translate("ChapterCitationWindow", "2nd Author", nullptr));
        radio_3rd->setText(QCoreApplication::translate("ChapterCitationWindow", "3rd Author", nullptr));
        groupBox_in->setTitle(QCoreApplication::translate("ChapterCitationWindow", "Input data for book where chapter is included!", nullptr));
        label_title_in->setText(QCoreApplication::translate("ChapterCitationWindow", "Title", nullptr));
        label_year_in->setText(QCoreApplication::translate("ChapterCitationWindow", "Year", nullptr));
        label_place_in->setText(QCoreApplication::translate("ChapterCitationWindow", "Place", nullptr));
        label_publisher_in->setText(QCoreApplication::translate("ChapterCitationWindow", "Publisher", nullptr));
        label_author_in->setText(QCoreApplication::translate("ChapterCitationWindow", "Author", nullptr));
        radio_1st_in->setText(QCoreApplication::translate("ChapterCitationWindow", "One Author", nullptr));
        radio_2nd_in->setText(QCoreApplication::translate("ChapterCitationWindow", "2nd Author", nullptr));
        radio_3rd_in->setText(QCoreApplication::translate("ChapterCitationWindow", "3rd Author", nullptr));
        button_back->setText(QString());
        button_copy->setText(QCoreApplication::translate("ChapterCitationWindow", "Copy", nullptr));
        button_go->setText(QCoreApplication::translate("ChapterCitationWindow", "Go!", nullptr));
        label_copy->setText(QString());
        label_result->setText(QString());
        button_reset->setText(QCoreApplication::translate("ChapterCitationWindow", "R\n"
"e\n"
"s\n"
"e\n"
"t", nullptr));
        button_reset_in->setText(QCoreApplication::translate("ChapterCitationWindow", "R\n"
"e\n"
"s\n"
"e\n"
"t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChapterCitationWindow: public Ui_ChapterCitationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAPTERCITATIONWINDOW_H

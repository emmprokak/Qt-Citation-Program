/********************************************************************************
** Form generated from reading UI file 'bookcitationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKCITATIONWINDOW_H
#define UI_BOOKCITATIONWINDOW_H

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

class Ui_BookCitationWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_place;
    QLineEdit *lineedit_publisher;
    QLabel *label_title;
    QLineEdit *lineedit_title;
    QLabel *label_year;
    QLineEdit *lineedit_year;
    QLabel *label_author;
    QLineEdit *lineedit_author;
    QLineEdit *lineedit_place;
    QLabel *label_publisher;
    QLabel *label_result;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *button_copy;
    QPushButton *button_go;
    QPushButton *button_back;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radio_1st;
    QRadioButton *radio_2nd;
    QRadioButton *radio_3rd;
    QLabel *label_copy;
    QPushButton *button_reset;
    QMenuBar *menubar;

    void setupUi(QMainWindow *BookCitationWindow)
    {
        if (BookCitationWindow->objectName().isEmpty())
            BookCitationWindow->setObjectName(QString::fromUtf8("BookCitationWindow"));
        BookCitationWindow->resize(385, 481);
        centralwidget = new QWidget(BookCitationWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 311, 241));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        label_place = new QLabel(groupBox);
        label_place->setObjectName(QString::fromUtf8("label_place"));
        label_place->setGeometry(QRect(60, 80, 41, 22));
        label_place->setFont(font);
        lineedit_publisher = new QLineEdit(groupBox);
        lineedit_publisher->setObjectName(QString::fromUtf8("lineedit_publisher"));
        lineedit_publisher->setGeometry(QRect(10, 80, 146, 22));
        lineedit_publisher->setFont(font);
        label_title = new QLabel(groupBox);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(80, 80, 20, 22));
        label_title->setFont(font);
        lineedit_title = new QLineEdit(groupBox);
        lineedit_title->setObjectName(QString::fromUtf8("lineedit_title"));
        lineedit_title->setGeometry(QRect(20, 80, 134, 22));
        lineedit_title->setFont(font);
        label_year = new QLabel(groupBox);
        label_year->setObjectName(QString::fromUtf8("label_year"));
        label_year->setGeometry(QRect(70, 80, 22, 22));
        label_year->setFont(font);
        lineedit_year = new QLineEdit(groupBox);
        lineedit_year->setObjectName(QString::fromUtf8("lineedit_year"));
        lineedit_year->setGeometry(QRect(10, 80, 136, 22));
        lineedit_year->setFont(font);
        label_author = new QLabel(groupBox);
        label_author->setObjectName(QString::fromUtf8("label_author"));
        label_author->setGeometry(QRect(60, 80, 33, 22));
        label_author->setFont(font);
        lineedit_author = new QLineEdit(groupBox);
        lineedit_author->setObjectName(QString::fromUtf8("lineedit_author"));
        lineedit_author->setGeometry(QRect(0, 80, 147, 22));
        lineedit_author->setFont(font);
        lineedit_place = new QLineEdit(groupBox);
        lineedit_place->setObjectName(QString::fromUtf8("lineedit_place"));
        lineedit_place->setGeometry(QRect(20, 80, 113, 21));
        lineedit_place->setFont(font);
        label_publisher = new QLabel(groupBox);
        label_publisher->setObjectName(QString::fromUtf8("label_publisher"));
        label_publisher->setGeometry(QRect(50, 80, 61, 21));
        label_publisher->setFont(font);
        label_result = new QLabel(centralwidget);
        label_result->setObjectName(QString::fromUtf8("label_result"));
        label_result->setGeometry(QRect(30, 380, 321, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria")});
        font1.setPointSize(16);
        label_result->setFont(font1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 330, 168, 35));
        layoutWidget->setFont(font);
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        button_copy = new QPushButton(layoutWidget);
        button_copy->setObjectName(QString::fromUtf8("button_copy"));
        button_copy->setFont(font);

        horizontalLayout_5->addWidget(button_copy);

        button_go = new QPushButton(layoutWidget);
        button_go->setObjectName(QString::fromUtf8("button_go"));
        button_go->setFont(font);

        horizontalLayout_5->addWidget(button_go);

        button_back = new QPushButton(centralwidget);
        button_back->setObjectName(QString::fromUtf8("button_back"));
        button_back->setGeometry(QRect(10, 330, 61, 31));
        button_back->setFont(font);
        button_back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#000000;\n"
"}\n"
"\n"
"QPushButton:Pressed{\n"
"background-color:#24c8c8;\n"
"}"));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 280, 351, 24));
        layoutWidget1->setFont(font);
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        radio_1st = new QRadioButton(layoutWidget1);
        radio_1st->setObjectName(QString::fromUtf8("radio_1st"));
        QFont font2;
        font2.setPointSize(14);
        radio_1st->setFont(font2);

        horizontalLayout_6->addWidget(radio_1st);

        radio_2nd = new QRadioButton(layoutWidget1);
        radio_2nd->setObjectName(QString::fromUtf8("radio_2nd"));
        radio_2nd->setFont(font2);

        horizontalLayout_6->addWidget(radio_2nd);

        radio_3rd = new QRadioButton(layoutWidget1);
        radio_3rd->setObjectName(QString::fromUtf8("radio_3rd"));
        radio_3rd->setFont(font2);

        horizontalLayout_6->addWidget(radio_3rd);

        label_copy = new QLabel(centralwidget);
        label_copy->setObjectName(QString::fromUtf8("label_copy"));
        label_copy->setGeometry(QRect(180, 310, 131, 21));
        label_copy->setFont(font2);
        button_reset = new QPushButton(centralwidget);
        button_reset->setObjectName(QString::fromUtf8("button_reset"));
        button_reset->setGeometry(QRect(340, 100, 31, 101));
        button_reset->setFont(font2);
        BookCitationWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BookCitationWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 385, 24));
        BookCitationWindow->setMenuBar(menubar);
        QWidget::setTabOrder(lineedit_author, lineedit_year);
        QWidget::setTabOrder(lineedit_year, lineedit_title);
        QWidget::setTabOrder(lineedit_title, lineedit_place);
        QWidget::setTabOrder(lineedit_place, lineedit_publisher);
        QWidget::setTabOrder(lineedit_publisher, button_go);
        QWidget::setTabOrder(button_go, radio_1st);
        QWidget::setTabOrder(radio_1st, radio_2nd);
        QWidget::setTabOrder(radio_2nd, radio_3rd);
        QWidget::setTabOrder(radio_3rd, button_copy);
        QWidget::setTabOrder(button_copy, button_back);

        retranslateUi(BookCitationWindow);

        QMetaObject::connectSlotsByName(BookCitationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BookCitationWindow)
    {
        BookCitationWindow->setWindowTitle(QCoreApplication::translate("BookCitationWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BookCitationWindow", "Input data for citation", nullptr));
        label_place->setText(QCoreApplication::translate("BookCitationWindow", "Place", nullptr));
        label_title->setText(QCoreApplication::translate("BookCitationWindow", "Title", nullptr));
        label_year->setText(QCoreApplication::translate("BookCitationWindow", "Year", nullptr));
        label_author->setText(QCoreApplication::translate("BookCitationWindow", "Author", nullptr));
        label_publisher->setText(QCoreApplication::translate("BookCitationWindow", "Publisher", nullptr));
        label_result->setText(QString());
        button_copy->setText(QCoreApplication::translate("BookCitationWindow", "Copy", nullptr));
        button_go->setText(QCoreApplication::translate("BookCitationWindow", "Go!", nullptr));
        button_back->setText(QString());
        radio_1st->setText(QCoreApplication::translate("BookCitationWindow", "One Author", nullptr));
        radio_2nd->setText(QCoreApplication::translate("BookCitationWindow", "2nd Author", nullptr));
        radio_3rd->setText(QCoreApplication::translate("BookCitationWindow", "3rd Author", nullptr));
        label_copy->setText(QString());
        button_reset->setText(QCoreApplication::translate("BookCitationWindow", "R\n"
"e\n"
"s\n"
"e\n"
"t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookCitationWindow: public Ui_BookCitationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKCITATIONWINDOW_H

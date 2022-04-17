/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QPushButton *button_info;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_paper;
    QPushButton *button_book;
    QPushButton *button_chapter;
    QCheckBox *checkbox;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(397, 413);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 270, 141, 22));
        QFont font;
        font.setPointSize(14);
        comboBox->setFont(font);
        button_info = new QPushButton(centralwidget);
        button_info->setObjectName(QString::fromUtf8("button_info"));
        button_info->setGeometry(QRect(300, 290, 61, 61));
        button_info->setBaseSize(QSize(86, 86));
        button_info->setCursor(QCursor(Qt::PointingHandCursor));
        button_info->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#000000;\n"
"}\n"
"\n"
"QPushButton:Pressed{\n"
"background-color:#24c8c8;\n"
"}"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 130, 381, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_paper = new QPushButton(layoutWidget);
        button_paper->setObjectName(QString::fromUtf8("button_paper"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_paper->sizePolicy().hasHeightForWidth());
        button_paper->setSizePolicy(sizePolicy);
        button_paper->setBaseSize(QSize(86, 86));
        button_paper->setCursor(QCursor(Qt::PointingHandCursor));
        button_paper->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#000000;\n"
"}\n"
"\n"
"QPushButton:Pressed{\n"
"background-color:#24c8c8;\n"
"}"));

        horizontalLayout->addWidget(button_paper);

        button_book = new QPushButton(layoutWidget);
        button_book->setObjectName(QString::fromUtf8("button_book"));
        sizePolicy.setHeightForWidth(button_book->sizePolicy().hasHeightForWidth());
        button_book->setSizePolicy(sizePolicy);
        button_book->setBaseSize(QSize(86, 86));
        button_book->setCursor(QCursor(Qt::PointingHandCursor));
        button_book->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#000000;\n"
"}\n"
"\n"
"QPushButton:Pressed{\n"
"background-color:#24c8c8;\n"
"}"));

        horizontalLayout->addWidget(button_book);

        button_chapter = new QPushButton(layoutWidget);
        button_chapter->setObjectName(QString::fromUtf8("button_chapter"));
        sizePolicy.setHeightForWidth(button_chapter->sizePolicy().hasHeightForWidth());
        button_chapter->setSizePolicy(sizePolicy);
        button_chapter->setBaseSize(QSize(86, 86));
        button_chapter->setCursor(QCursor(Qt::PointingHandCursor));
        button_chapter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#000000;\n"
"}\n"
"\n"
"QPushButton:Pressed{\n"
"background-color:#24c8c8;\n"
"}"));

        horizontalLayout->addWidget(button_chapter);

        checkbox = new QCheckBox(centralwidget);
        checkbox->setObjectName(QString::fromUtf8("checkbox"));
        checkbox->setGeometry(QRect(10, 310, 201, 31));
        checkbox->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 30, 201, 16));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(350, 390, 61, 16));
        label_5->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 0, 221, 41));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 381, 171, 17));
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 60, 321, 16));
        label_4->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(110, 90, 161, 16));
        label_6->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 397, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button_info->setText(QString());
        button_paper->setText(QString());
        button_book->setText(QString());
        button_chapter->setText(QString());
#if QT_CONFIG(tooltip)
        checkbox->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>This option allows you to cite up to 10 authors for papers</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkbox->setText(QCoreApplication::translate("MainWindow", "More than 3 authors support\n"
"(for paper citation only)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\302\251 2022 Prokakis Emmanouil", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "1.1.2", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Qt Citation Program", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Icons by Danae Lypiridi", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Licensed under GNU GPLv3 + Powered by Qt", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "website", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

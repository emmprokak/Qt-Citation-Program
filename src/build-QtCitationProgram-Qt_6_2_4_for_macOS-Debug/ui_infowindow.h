/********************************************************************************
** Form generated from reading UI file 'infowindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOWINDOW_H
#define UI_INFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *text;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_icon;
    QLabel *label;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QMainWindow *InfoWindow)
    {
        if (InfoWindow->objectName().isEmpty())
            InfoWindow->setObjectName(QString::fromUtf8("InfoWindow"));
        InfoWindow->resize(368, 306);
        centralwidget = new QWidget(InfoWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        text = new QTextEdit(centralwidget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(10, 90, 331, 211));
        QFont font;
        font.setPointSize(16);
        text->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 141, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_icon = new QLabel(layoutWidget);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));

        horizontalLayout->addWidget(label_icon);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(220, 10, 138, 71));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font1.setPointSize(13);
        font1.setItalic(false);
        label_2->setFont(font1);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        InfoWindow->setCentralWidget(centralwidget);

        retranslateUi(InfoWindow);

        QMetaObject::connectSlotsByName(InfoWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InfoWindow)
    {
        InfoWindow->setWindowTitle(QCoreApplication::translate("InfoWindow", "MainWindow", nullptr));
        text->setHtml(QCoreApplication::translate("InfoWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">Qt Citation Program is free and open source software, licensed under GPLv3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">This Citation"
                        " Program, built with C++ and powered by Qt, aims to help the user format his/her citations in a more automated way. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">The program focuses on formating the data given by the user to a complete citation, ready to be pasted into school/university projects and academic papers!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><sp"
                        "an style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">The user is given the choice between the Harvard and APA Citation Standards, allowing for the citation of papers, books and in-book-chapters.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">After importing the data in the textfields of the GUI and clicking the &quot;Go&quot; button, the user is presented with the resulting citation. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">By clicking the &quot;Copy&quot; button, the citation gets copied to the system clipboard, ready to be pasted where needed.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">Please note that this program comes without any warranty!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:14pt;\"><br /></p></body></html>", nullptr));
        label_icon->setText(QString());
        label->setText(QCoreApplication::translate("InfoWindow", "Information", nullptr));
        label_2->setText(QCoreApplication::translate("InfoWindow", "Software by Prokakis Emmanouil", nullptr));
        label_3->setText(QCoreApplication::translate("InfoWindow", "Icons by Danae Lypiridi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoWindow: public Ui_InfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOWINDOW_H

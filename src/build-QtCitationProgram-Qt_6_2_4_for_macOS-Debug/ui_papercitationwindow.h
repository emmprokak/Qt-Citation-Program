/********************************************************************************
** Form generated from reading UI file 'papercitationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAPERCITATIONWINDOW_H
#define UI_PAPERCITATIONWINDOW_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaperCitationWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_result;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *button_copy;
    QPushButton *button_go;
    QPushButton *button_back;
    QLabel *label_copy;
    QSpinBox *spinbox;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QLabel *label_details;
    QLineEdit *lineedit_details;
    QLabel *label_title;
    QLineEdit *lineedit_title;
    QLabel *label_year;
    QLineEdit *lineedit_year;
    QLabel *label_author;
    QLineEdit *lineedit_author;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radio_1st;
    QRadioButton *radio_2nd;
    QRadioButton *radio_3rd;
    QPushButton *button_reset;
    QMenuBar *menubar;

    void setupUi(QMainWindow *PaperCitationWindow)
    {
        if (PaperCitationWindow->objectName().isEmpty())
            PaperCitationWindow->setObjectName(QString::fromUtf8("PaperCitationWindow"));
        PaperCitationWindow->resize(380, 488);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PaperCitationWindow->sizePolicy().hasHeightForWidth());
        PaperCitationWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(PaperCitationWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_result = new QLabel(centralwidget);
        label_result->setObjectName(QString::fromUtf8("label_result"));
        label_result->setGeometry(QRect(20, 400, 331, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(16);
        label_result->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 340, 168, 35));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        button_copy = new QPushButton(layoutWidget);
        button_copy->setObjectName(QString::fromUtf8("button_copy"));
        QFont font1;
        font1.setPointSize(16);
        button_copy->setFont(font1);

        horizontalLayout_5->addWidget(button_copy);

        button_go = new QPushButton(layoutWidget);
        button_go->setObjectName(QString::fromUtf8("button_go"));
        button_go->setFont(font1);

        horizontalLayout_5->addWidget(button_go);

        button_back = new QPushButton(centralwidget);
        button_back->setObjectName(QString::fromUtf8("button_back"));
        button_back->setGeometry(QRect(20, 340, 61, 31));
        button_back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#000000;\n"
"}\n"
"\n"
"QPushButton:Pressed{\n"
"background-color:#24c8c8;\n"
"}"));
        label_copy = new QLabel(centralwidget);
        label_copy->setObjectName(QString::fromUtf8("label_copy"));
        label_copy->setGeometry(QRect(180, 320, 131, 16));
        QFont font2;
        font2.setPointSize(14);
        label_copy->setFont(font2);
        spinbox = new QSpinBox(centralwidget);
        spinbox->setObjectName(QString::fromUtf8("spinbox"));
        spinbox->setGeometry(QRect(300, 0, 61, 51));
        spinbox->setFont(font1);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 30, 321, 281));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setMinimumSize(QSize(0, 0));
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(false);
        splitter->setHandleWidth(4);
        splitter->setChildrenCollapsible(true);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font1);
        label_details = new QLabel(groupBox);
        label_details->setObjectName(QString::fromUtf8("label_details"));
        label_details->setGeometry(QRect(120, 50, 32, 22));
        label_details->setFont(font1);
        lineedit_details = new QLineEdit(groupBox);
        lineedit_details->setObjectName(QString::fromUtf8("lineedit_details"));
        lineedit_details->setGeometry(QRect(30, 100, 146, 22));
        lineedit_details->setFont(font1);
        label_title = new QLabel(groupBox);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(120, 50, 20, 22));
        label_title->setFont(font1);
        lineedit_title = new QLineEdit(groupBox);
        lineedit_title->setObjectName(QString::fromUtf8("lineedit_title"));
        lineedit_title->setGeometry(QRect(30, 80, 134, 22));
        lineedit_title->setFont(font1);
        label_year = new QLabel(groupBox);
        label_year->setObjectName(QString::fromUtf8("label_year"));
        label_year->setGeometry(QRect(110, 50, 22, 22));
        label_year->setFont(font1);
        lineedit_year = new QLineEdit(groupBox);
        lineedit_year->setObjectName(QString::fromUtf8("lineedit_year"));
        lineedit_year->setGeometry(QRect(10, 50, 136, 22));
        lineedit_year->setFont(font1);
        label_author = new QLabel(groupBox);
        label_author->setObjectName(QString::fromUtf8("label_author"));
        label_author->setGeometry(QRect(60, 50, 33, 22));
        label_author->setFont(font1);
        lineedit_author = new QLineEdit(groupBox);
        lineedit_author->setObjectName(QString::fromUtf8("lineedit_author"));
        lineedit_author->setGeometry(QRect(10, 20, 147, 22));
        lineedit_author->setFont(font1);
        lineedit_author->setFocusPolicy(Qt::StrongFocus);
        splitter->addWidget(groupBox);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setSpacing(2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        radio_1st = new QRadioButton(layoutWidget1);
        radio_1st->setObjectName(QString::fromUtf8("radio_1st"));
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

        splitter->addWidget(layoutWidget1);
        button_reset = new QPushButton(centralwidget);
        button_reset->setObjectName(QString::fromUtf8("button_reset"));
        button_reset->setGeometry(QRect(340, 100, 31, 101));
        button_reset->setFont(font2);
        PaperCitationWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PaperCitationWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 380, 24));
        PaperCitationWindow->setMenuBar(menubar);
        QWidget::setTabOrder(lineedit_author, lineedit_year);
        QWidget::setTabOrder(lineedit_year, lineedit_title);
        QWidget::setTabOrder(lineedit_title, lineedit_details);
        QWidget::setTabOrder(lineedit_details, button_go);
        QWidget::setTabOrder(button_go, button_back);
        QWidget::setTabOrder(button_back, radio_1st);
        QWidget::setTabOrder(radio_1st, radio_2nd);
        QWidget::setTabOrder(radio_2nd, radio_3rd);
        QWidget::setTabOrder(radio_3rd, spinbox);

        retranslateUi(PaperCitationWindow);

        QMetaObject::connectSlotsByName(PaperCitationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PaperCitationWindow)
    {
        PaperCitationWindow->setWindowTitle(QCoreApplication::translate("PaperCitationWindow", "MainWindow", nullptr));
        label_result->setText(QString());
        button_copy->setText(QCoreApplication::translate("PaperCitationWindow", "Copy", nullptr));
        button_go->setText(QCoreApplication::translate("PaperCitationWindow", "Go!", nullptr));
        button_back->setText(QString());
        label_copy->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("PaperCitationWindow", "Input data for citation", nullptr));
        label_details->setText(QCoreApplication::translate("PaperCitationWindow", "Details", nullptr));
        label_title->setText(QCoreApplication::translate("PaperCitationWindow", "Title", nullptr));
        label_year->setText(QCoreApplication::translate("PaperCitationWindow", "Year", nullptr));
        label_author->setText(QCoreApplication::translate("PaperCitationWindow", "Author", nullptr));
        radio_1st->setText(QCoreApplication::translate("PaperCitationWindow", "One Author", nullptr));
        radio_2nd->setText(QCoreApplication::translate("PaperCitationWindow", "2nd Author", nullptr));
        radio_3rd->setText(QCoreApplication::translate("PaperCitationWindow", "3rd Author", nullptr));
        button_reset->setText(QCoreApplication::translate("PaperCitationWindow", "R\n"
"e\n"
"s\n"
"e\n"
"t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaperCitationWindow: public Ui_PaperCitationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAPERCITATIONWINDOW_H

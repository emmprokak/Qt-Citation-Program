#ifndef CITATION_H
#define CITATION_H
#include <QString>
#include <QMainWindow>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

//the citation parent class includes basic citation functions that all citation windows share
class Citation
{
public:
    Citation();
    QString& format_author(QString& name, QString& style);
    QString& format_title(QString& name);
    //the format citation function will be overriden by every child class
    virtual void format_citation() = 0;

protected:
    QGridLayout *grid;
    QLabel *label_2nd_author;
    QLabel *label_3rd_author;
    QLineEdit *lineedit_2nd_author;
    QLineEdit *lineedit_3rd_author;

    bool one_author = true;
    bool two_author = false;
    bool three_author = false;
};

#endif // CITATION_H

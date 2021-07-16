/********************************************************************************
** Form generated from reading UI file 'examples.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLES_H
#define UI_EXAMPLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Examples
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Examples)
    {
        if (Examples->objectName().isEmpty())
            Examples->setObjectName(QString::fromUtf8("Examples"));
        Examples->resize(887, 981);
        horizontalLayout = new QHBoxLayout(Examples);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(Examples);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout->addWidget(textBrowser);


        retranslateUi(Examples);

        QMetaObject::connectSlotsByName(Examples);
    } // setupUi

    void retranslateUi(QDialog *Examples)
    {
        Examples->setWindowTitle(QCoreApplication::translate("Examples", "\320\237\321\200\320\270\320\274\320\265\321\200\321\213", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Examples", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/examples/img/examples/ax12.png\" /><img src=\":/examples/img/examples/ex3.png\" /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Examples: public Ui_Examples {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLES_H

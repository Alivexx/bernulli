/********************************************************************************
** Form generated from reading UI file 'proofs.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROOFS_H
#define UI_PROOFS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_proofs
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *proofs)
    {
        if (proofs->objectName().isEmpty())
            proofs->setObjectName(QString::fromUtf8("proofs"));
        proofs->resize(878, 507);
        horizontalLayout = new QHBoxLayout(proofs);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(proofs);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout->addWidget(textBrowser);


        retranslateUi(proofs);

        QMetaObject::connectSlotsByName(proofs);
    } // setupUi

    void retranslateUi(QDialog *proofs)
    {
        proofs->setWindowTitle(QCoreApplication::translate("proofs", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("proofs", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/rec/img/Proof.png\" /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class proofs: public Ui_proofs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROOFS_H

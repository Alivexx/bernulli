/********************************************************************************
** Form generated from reading UI file 'proofs.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROOFS_H
#define UI_PROOFS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_proofs
{
public:

    void setupUi(QDialog *proofs)
    {
        if (proofs->objectName().isEmpty())
            proofs->setObjectName(QString::fromUtf8("proofs"));
        proofs->resize(400, 300);

        retranslateUi(proofs);

        QMetaObject::connectSlotsByName(proofs);
    } // setupUi

    void retranslateUi(QDialog *proofs)
    {
        proofs->setWindowTitle(QCoreApplication::translate("proofs", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class proofs: public Ui_proofs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROOFS_H

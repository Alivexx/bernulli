/********************************************************************************
** Form generated from reading UI file 'theory.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEORY_H
#define UI_THEORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Theory
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *Theory)
    {
        if (Theory->objectName().isEmpty())
            Theory->setObjectName(QString::fromUtf8("Theory"));
        Theory->resize(400, 300);
        verticalLayout = new QVBoxLayout(Theory);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Theory);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(Theory);

        QMetaObject::connectSlotsByName(Theory);
    } // setupUi

    void retranslateUi(QDialog *Theory)
    {
        Theory->setWindowTitle(QCoreApplication::translate("Theory", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Theory", "\320\227\320\264\320\265\321\201\321\214 \320\261\321\203\320\264\320\265\321\202 \321\202\320\265\320\276\321\200\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Theory: public Ui_Theory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEORY_H

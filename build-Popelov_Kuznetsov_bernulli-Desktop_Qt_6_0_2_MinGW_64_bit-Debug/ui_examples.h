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
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Examples
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QDialog *Examples)
    {
        if (Examples->objectName().isEmpty())
            Examples->setObjectName(QString::fromUtf8("Examples"));
        Examples->resize(400, 300);
        horizontalLayout = new QHBoxLayout(Examples);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Examples);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);


        retranslateUi(Examples);

        QMetaObject::connectSlotsByName(Examples);
    } // setupUi

    void retranslateUi(QDialog *Examples)
    {
        Examples->setWindowTitle(QCoreApplication::translate("Examples", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Examples", "\320\227\320\264\320\265\321\201\321\214 \320\261\321\203\320\264\321\203\321\202 \320\277\321\200\320\270\320\274\320\265\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Examples: public Ui_Examples {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLES_H

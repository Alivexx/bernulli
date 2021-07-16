/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *succ;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *count;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *prob;
    QPushButton *Calculate;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *ansField;

    void setupUi(QDialog *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(787, 288);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setMaximumSize(QSize(16777215, 10000));
        verticalLayout_3 = new QVBoxLayout(Calculator);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(Calculator);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/form.png")));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_3 = new QGroupBox(Calculator);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMaximumSize(QSize(16777215, 58));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        succ = new QLineEdit(groupBox_3);
        succ->setObjectName(QString::fromUtf8("succ"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(succ->sizePolicy().hasHeightForWidth());
        succ->setSizePolicy(sizePolicy2);
        succ->setMaximumSize(QSize(16777215, 25));

        verticalLayout_2->addWidget(succ);


        horizontalLayout_2->addWidget(groupBox_3);

        groupBox = new QGroupBox(Calculator);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(16777215, 58));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        count = new QLineEdit(groupBox);
        count->setObjectName(QString::fromUtf8("count"));
        sizePolicy2.setHeightForWidth(count->sizePolicy().hasHeightForWidth());
        count->setSizePolicy(sizePolicy2);
        count->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(count);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Calculator);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMaximumSize(QSize(16777215, 58));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        prob = new QLineEdit(groupBox_2);
        prob->setObjectName(QString::fromUtf8("prob"));
        sizePolicy2.setHeightForWidth(prob->sizePolicy().hasHeightForWidth());
        prob->setSizePolicy(sizePolicy2);
        prob->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(prob);


        horizontalLayout_2->addWidget(groupBox_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        Calculate = new QPushButton(Calculator);
        Calculate->setObjectName(QString::fromUtf8("Calculate"));

        verticalLayout_5->addWidget(Calculate);


        verticalLayout_3->addLayout(verticalLayout_5);

        groupBox_4 = new QGroupBox(Calculator);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy3);
        groupBox_4->setMaximumSize(QSize(16777215, 60));
        groupBox_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ansField = new QLineEdit(groupBox_4);
        ansField->setObjectName(QString::fromUtf8("ansField"));
        sizePolicy1.setHeightForWidth(ansField->sizePolicy().hasHeightForWidth());
        ansField->setSizePolicy(sizePolicy1);
        ansField->setMaximumSize(QSize(150, 16777215));
        ansField->setAlignment(Qt::AlignCenter);
        ansField->setReadOnly(true);
        ansField->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(ansField);


        verticalLayout_3->addWidget(groupBox_4);


        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QDialog *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        label->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("Calculator", "\320\247\320\270\321\201\320\273\320\276 \321\203\321\201\320\277\320\265\321\205\320\276\320\262 (k)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Calculator", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\260\320\261\320\273\321\216\320\264\320\265\320\275\320\270\320\271 (n)", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_2->setToolTip(QCoreApplication::translate("Calculator", "\320\230\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 (.)", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("Calculator", "\320\222\320\265\321\200\320\276\321\217\321\202\320\275\320\276\321\201\321\202\321\214 \320\275\320\260\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217 \321\201\320\276\320\261\321\213\321\202\320\270\321\217 (p)", nullptr));
#if QT_CONFIG(tooltip)
        prob->setToolTip(QCoreApplication::translate("Calculator", "\320\230\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 (.)", nullptr));
#endif // QT_CONFIG(tooltip)
        Calculate->setText(QCoreApplication::translate("Calculator", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Calculator", "                                                 \320\222\320\265\321\200\320\276\321\217\321\202\320\275\320\276\321\201\321\202\321\214 \321\202\320\276\320\263\320\276, \321\207\321\202\320\276 \321\201\320\276\320\261\321\213\321\202\320\270\320\265 \320\275\320\260\321\201\321\202\321\203\320\277\320\270\321\202 \321\200\320\276\320\262\320\275\320\276 k \321\200\320\260\320\267 \320\262 n \320\275\320\265\320\267\320\260\320\262\320\270\321\201\320\270\320\274\321\213\321\205 \320\270\321\201\320\277\321\213\321\202\320\260\320\275\320\270\321\217\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H

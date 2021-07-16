/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *verticalLayoutWidget;
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
    QLabel *label;
    QGroupBox *groupBox_4;
    QLineEdit *answerField;

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
        verticalLayoutWidget = new QWidget(Calculator);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 70, 703, 93));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_3 = new QGroupBox(verticalLayoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMaximumSize(QSize(16777215, 58));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        succ = new QLineEdit(groupBox_3);
        succ->setObjectName(QString::fromUtf8("succ"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(succ->sizePolicy().hasHeightForWidth());
        succ->setSizePolicy(sizePolicy1);
        succ->setMaximumSize(QSize(16777215, 25));

        verticalLayout_2->addWidget(succ);


        horizontalLayout_2->addWidget(groupBox_3);

        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(16777215, 58));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        count = new QLineEdit(groupBox);
        count->setObjectName(QString::fromUtf8("count"));
        sizePolicy1.setHeightForWidth(count->sizePolicy().hasHeightForWidth());
        count->setSizePolicy(sizePolicy1);
        count->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(count);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMaximumSize(QSize(16777215, 58));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        prob = new QLineEdit(groupBox_2);
        prob->setObjectName(QString::fromUtf8("prob"));
        sizePolicy1.setHeightForWidth(prob->sizePolicy().hasHeightForWidth());
        prob->setSizePolicy(sizePolicy1);
        prob->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(prob);


        horizontalLayout_2->addWidget(groupBox_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        Calculate = new QPushButton(verticalLayoutWidget);
        Calculate->setObjectName(QString::fromUtf8("Calculate"));

        verticalLayout_5->addWidget(Calculate);

        label = new QLabel(Calculator);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 20, 231, 41));
        label->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/form.png")));
        groupBox_4 = new QGroupBox(Calculator);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(40, 200, 721, 62));
        answerField = new QLineEdit(groupBox_4);
        answerField->setObjectName(QString::fromUtf8("answerField"));
        answerField->setGeometry(QRect(270, 30, 161, 22));
        answerField->setReadOnly(true);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QDialog *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
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
        label->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("Calculator", "                                                 \320\222\320\265\321\200\320\276\321\217\321\202\320\275\320\276\321\201\321\202\321\214 \321\202\320\276\320\263\320\276, \321\207\321\202\320\276 \321\201\320\276\320\261\321\213\321\202\320\270\320\265 \320\275\320\260\321\201\321\202\321\203\320\277\320\270\321\202 \321\200\320\276\320\262\320\275\320\276 k \321\200\320\260\320\267 \320\262 n \320\275\320\265\320\267\320\260\320\262\320\270\321\201\320\270\320\274\321\213\321\205 \320\270\321\201\320\277\321\213\321\202\320\260\320\275\320\270\321\217\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H

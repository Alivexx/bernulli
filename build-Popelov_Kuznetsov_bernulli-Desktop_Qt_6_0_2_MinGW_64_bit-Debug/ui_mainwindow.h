/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_history;
    QPushButton *pushButton_theory;
    QPushButton *pushButton_examples;
    QPushButton *pushButton_calc;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(619, 101);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_history = new QPushButton(centralwidget);
        pushButton_history->setObjectName(QString::fromUtf8("pushButton_history"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_history->sizePolicy().hasHeightForWidth());
        pushButton_history->setSizePolicy(sizePolicy);
        pushButton_history->setAcceptDrops(false);
        pushButton_history->setCheckable(false);
        pushButton_history->setAutoRepeat(false);
        pushButton_history->setAutoExclusive(false);
        pushButton_history->setAutoDefault(false);
        pushButton_history->setFlat(false);

        horizontalLayout->addWidget(pushButton_history);

        pushButton_theory = new QPushButton(centralwidget);
        pushButton_theory->setObjectName(QString::fromUtf8("pushButton_theory"));
        sizePolicy.setHeightForWidth(pushButton_theory->sizePolicy().hasHeightForWidth());
        pushButton_theory->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_theory);

        pushButton_examples = new QPushButton(centralwidget);
        pushButton_examples->setObjectName(QString::fromUtf8("pushButton_examples"));
        sizePolicy.setHeightForWidth(pushButton_examples->sizePolicy().hasHeightForWidth());
        pushButton_examples->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_examples);

        pushButton_calc = new QPushButton(centralwidget);
        pushButton_calc->setObjectName(QString::fromUtf8("pushButton_calc"));
        sizePolicy.setHeightForWidth(pushButton_calc->sizePolicy().hasHeightForWidth());
        pushButton_calc->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_calc);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        pushButton_history->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_history->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217", nullptr));
        pushButton_theory->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\276\321\200\320\270\321\217", nullptr));
        pushButton_examples->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\321\200\321\213", nullptr));
        pushButton_calc->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

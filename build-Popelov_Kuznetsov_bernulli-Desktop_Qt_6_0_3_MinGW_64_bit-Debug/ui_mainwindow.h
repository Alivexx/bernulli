/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QAction *action;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_history;
    QPushButton *pushButton_theory;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_examples;
    QPushButton *pushButton_calc;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(621, 281);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/two-businessmen-holding-a-flag.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/YakobBernulli.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 90, 581, 151));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_history = new QPushButton(horizontalLayoutWidget);
        pushButton_history->setObjectName(QString::fromUtf8("pushButton_history"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_history->sizePolicy().hasHeightForWidth());
        pushButton_history->setSizePolicy(sizePolicy);
        pushButton_history->setAcceptDrops(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/img/formula.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_history->setIcon(icon2);
        pushButton_history->setIconSize(QSize(32, 32));
        pushButton_history->setCheckable(false);
        pushButton_history->setAutoRepeat(false);
        pushButton_history->setAutoExclusive(false);
        pushButton_history->setAutoDefault(false);
        pushButton_history->setFlat(false);

        verticalLayout->addWidget(pushButton_history);

        pushButton_theory = new QPushButton(horizontalLayoutWidget);
        pushButton_theory->setObjectName(QString::fromUtf8("pushButton_theory"));
        sizePolicy.setHeightForWidth(pushButton_theory->sizePolicy().hasHeightForWidth());
        pushButton_theory->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/img/books-stack-of-three.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_theory->setIcon(icon3);
        pushButton_theory->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton_theory);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_examples = new QPushButton(horizontalLayoutWidget);
        pushButton_examples->setObjectName(QString::fromUtf8("pushButton_examples"));
        sizePolicy.setHeightForWidth(pushButton_examples->sizePolicy().hasHeightForWidth());
        pushButton_examples->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/img/research.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_examples->setIcon(icon4);
        pushButton_examples->setIconSize(QSize(32, 32));

        verticalLayout_2->addWidget(pushButton_examples);

        pushButton_calc = new QPushButton(horizontalLayoutWidget);
        pushButton_calc->setObjectName(QString::fromUtf8("pushButton_calc"));
        sizePolicy.setHeightForWidth(pushButton_calc->sizePolicy().hasHeightForWidth());
        pushButton_calc->setSizePolicy(sizePolicy);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/img/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_calc->setIcon(icon5);
        pushButton_calc->setIconSize(QSize(32, 32));

        verticalLayout_2->addWidget(pushButton_calc);


        horizontalLayout->addLayout(verticalLayout_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 10, 331, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/form.png")));
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 621, 20));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_2);
        menu->addAction(action);

        retranslateUi(MainWindow);

        pushButton_history->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "BernuLLi", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\260\320\262\321\202\320\276\321\200\320\265", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\257\320\272\320\276\320\261 \320\221\320\265\321\200\320\275\321\203\320\273\320\273\320\270", nullptr));
        pushButton_history->setText(QCoreApplication::translate("MainWindow", "\320\236 \321\204\320\276\321\200\320\274\321\203\320\273\320\265 \320\221\320\265\321\200\320\275\321\203\320\273\320\273\320\270", nullptr));
        pushButton_theory->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\276\321\200\320\270\321\217", nullptr));
        pushButton_examples->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\321\200\321\213", nullptr));
        pushButton_calc->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        label->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

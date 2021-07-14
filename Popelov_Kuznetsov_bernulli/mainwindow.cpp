#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "history.h"
#include "theory.h"
#include "calculator.h"
#include "examples.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_history_clicked()
{
    hide();
    History window;
    window.setModal(true);
    window.exec();
    show();
}

void MainWindow::on_pushButton_theory_clicked()
{
    hide();
    Theory window;
    window.setModal(true);
    window.exec();
    show();
}

void MainWindow::on_pushButton_examples_clicked()
{
    hide();
    Examples window;
    window.setModal(true);
    window.exec();
    show();
}

void MainWindow::on_pushButton_calc_clicked()
{
    hide();
    Calculator window;
    window.setModal(true);
    window.exec();
    show();
}

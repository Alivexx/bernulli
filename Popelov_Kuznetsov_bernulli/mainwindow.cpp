#include "mainwindow.h"
#include "ui_mainwindow.h"



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
    HistoryWindow = new History(this);
    HistoryWindow->show();
}

void MainWindow::on_pushButton_theory_clicked()
{
    TheoryWindow = new Theory(this);
    TheoryWindow ->show();
}

void MainWindow::on_pushButton_examples_clicked()
{
    ExamplesWindow = new Examples(this);
    ExamplesWindow->show();
}

void MainWindow::on_pushButton_calc_clicked()
{
    CalculatorWindow = new Calculator(this);
    CalculatorWindow->show();
}

void MainWindow::on_action_2_triggered()
{
    QMessageBox::information(this, "Авторы","Попелов Артём Андреевич и Кузнецов Егор Денисович - студенты группы М1О-207Б-19");
}

void MainWindow::on_action_triggered()
{
   QMessageBox::about(this,"Якоб Бернулли", "Якоб Бернулли (1655-1705) — швейцарский математик. Один из основателей теории вероятностей и математического анализа. Старший брат Иоганна Бернулли, совместно с ним положил начало вариационному исчислению. Доказал частный случай закона больших чисел — теорему Бернулли. Профессор математики Базельского университета. Иностранный член Парижской академии наук и Берлинской академии наук.");
}

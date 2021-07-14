#include "calculator.h"
#include "ui_calculator.h"
#include <string>
#include <iostream>
#include <sstream>
#include <QMessageBox>

using namespace std;

Calculator::Calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

double fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}

void Calculator::on_Calculate_clicked()
{
    int n = ui->count->text().toInt();
    float p = ui->prob->text().toFloat();
    int k = ui->succ->text().toInt();
    float answer = (fact(n)/(fact(k)*fact(n-k)))*pow(p, k)*pow(1-p,n-k);
    QMessageBox::information(this, "Ответ", QString::number(answer));
}

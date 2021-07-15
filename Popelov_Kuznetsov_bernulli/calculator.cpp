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

float bernulliCalc(int n, float p, int k) {
    float answer = (fact(n)/(fact(k)*fact(n-k)))*pow(p, k)*pow(1-p,n-k);
    return answer;
}

void Calculator::on_Calculate_clicked()
{
    QString nStr = ui->count->text();
    QString pStr = ui->prob->text();
    QString kStr = ui->succ->text();

    if  (nStr =="" || pStr=="" || kStr=="") {
        QMessageBox::about(this, "Ошибка","Введите все значения");
        ui->answerField->setText("");
    }
        else {
            int n = nStr.toInt();
            float p = pStr.toFloat();
            int k = kStr.toInt();
            float answer = bernulliCalc(n, p, k);
            ui->answerField->setText(QString::number(answer));
        }
}




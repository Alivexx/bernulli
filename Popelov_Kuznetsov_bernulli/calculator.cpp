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

float bernulliCalc (int n, float p, int k) {
    float answer = (fact(n)/(fact(k)*fact(n-k)))*pow(p, k)*pow(1-p,n-k);
    return answer;
}
bool check (string N) {
    bool res = true;
    for (unsigned long long i=0; i < N.size(); i++) {
            if (int(N[i]) < 48 || int(N[i]) > 58){
                res = false;
            }
    }
    return res;
}

void Calculator::on_Calculate_clicked()
{
    QString nStr = ui->count->text();
    QString pStr = ui->prob->text();
    QString kStr = ui->succ->text();


    if  (nStr =="" || pStr=="" || kStr=="" || pStr.toFloat() > 1 || kStr.toInt() > nStr.toInt() || check(nStr.toStdString()) == false || check(kStr.toStdString()) == false){
        QMessageBox::about(this, "Ошибка", "Введены некорректные значения");
        ui->ansField->setText("");
    }
        else {
            int n = nStr.toInt();
            float p = pStr.toFloat();
            int k = kStr.toInt();
            float answer = bernulliCalc(n, p, k);
            ui->ansField->setText(QString::number(answer));
        }
}




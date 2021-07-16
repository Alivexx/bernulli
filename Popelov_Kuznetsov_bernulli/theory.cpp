#include "theory.h"
#include "ui_theory.h"

Theory::Theory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Theory)
{
    ui->setupUi(this);
}

Theory::~Theory()
{
    delete ui;
}

void Theory::on_pushButton_proof_clicked()
{

}

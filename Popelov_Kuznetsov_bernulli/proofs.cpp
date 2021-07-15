#include "proofs.h"
#include "ui_proofs.h"
#include "mainwindow.h"

proofs::proofs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::proofs)
{
    ui->setupUi(this);
}

proofs::~proofs()
{
    delete ui;
}

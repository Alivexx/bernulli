#include "examples.h"
#include "ui_examples.h"

Examples::Examples(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Examples)
{
    ui->setupUi(this);
}

Examples::~Examples()
{
    delete ui;
}

#ifndef THEORY_H
#define THEORY_H
#include "proofs.h"


#include <QDialog>

namespace Ui {
class Theory;
}

class Theory : public QDialog
{
    Q_OBJECT

public:
    explicit Theory(QWidget *parent = nullptr);
    ~Theory();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Theory *ui;
    proofs * ProofsWindow;
};

#endif // THEORY_H

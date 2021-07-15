#ifndef PROOFS_H
#define PROOFS_H

#include <QDialog>

namespace Ui {
class proofs;
}

class proofs : public QDialog
{
    Q_OBJECT

public:
    explicit proofs(QWidget *parent = nullptr);
    ~proofs();

private:
    Ui::proofs *ui;
};

#endif // PROOFS_H

#ifndef THEORY_H
#define THEORY_H

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
<<<<<<< Updated upstream
=======

>>>>>>> Stashed changes
    void on_pushButton_proof_clicked();

private:
    Ui::Theory *ui;
<<<<<<< Updated upstream
=======

    proofs *ProofsWindow;
>>>>>>> Stashed changes
};

#endif // THEORY_H

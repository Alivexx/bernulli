#ifndef EXAMPLES_H
#define EXAMPLES_H

#include <QDialog>

namespace Ui {
class Examples;
}

class Examples : public QDialog
{
    Q_OBJECT

public:
    explicit Examples(QWidget *parent = nullptr);
    ~Examples();

private:
    Ui::Examples *ui;
};

#endif // EXAMPLES_H

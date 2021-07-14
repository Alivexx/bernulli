#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "history.h"
#include "theory.h"
#include "calculator.h"
#include "examples.h"
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:


    void on_pushButton_history_clicked();

    void on_pushButton_theory_clicked();

    void on_pushButton_examples_clicked();

    void on_pushButton_calc_clicked();

    void on_action_2_triggered();

    void on_action_triggered();

private:
    Ui::MainWindow *ui;

    History *HistoryWindow;
    Theory *TheoryWindow;
    Calculator *CalculatorWindow;
    Examples *ExamplesWindow;


};
#endif // MAINWINDOW_H

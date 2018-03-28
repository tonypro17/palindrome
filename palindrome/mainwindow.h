#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLCDNumber>

#include "focusablelineedit.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_searchBtn_clicked();
    int findPalindrome(int lowerLimit, int upperLimit);

    void on_inputOne_editingFinished();
    void on_inputTwo_editingFinished();
    void on_inputOne_focusInEvent(QFocusEvent *e);
    void on_inputTwo_focusInEvent(QFocusEvent *e);

private:
    Ui::MainWindow *ui;

    int numOne;
    int numTwo;

    int result;

    FocusableLineEdit inputOne;
    FocusableLineEdit inputTwo;

    QLineEdit resultTextDisplay;
    QLCDNumber LDCNumberDisplay;
};

#endif // MAINWINDOW_H

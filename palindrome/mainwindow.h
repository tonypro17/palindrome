#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLCDNumber>

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

private:
    Ui::MainWindow *ui;

    int numOne;
    int numTwo;

    int result;

    QLineEdit resultTextDisplay;
    QLCDNumber LDCNumberDisplay;
};

#endif // MAINWINDOW_H

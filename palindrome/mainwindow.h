#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

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
    void on_inputOne_valueChanged(int arg1);

    void on_inputTwo_valueChanged(int arg1);

    void on_searchBtn_clicked();

private:
    Ui::MainWindow *ui;

    int numOne;
    int numTwo;

    int largestPalindrome;
    QLineEdit largestPalindromeDisplay;
};

#endif // MAINWINDOW_H

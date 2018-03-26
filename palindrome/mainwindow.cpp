#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    numOne = 0;
    numTwo = 0;
    largestPalindrome = 0;

    largestPalindromeDisplay.setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_inputOne_valueChanged(int arg1)
{
    numOne = arg1;
}

void MainWindow::on_inputTwo_valueChanged(int arg1)
{
    numTwo = arg1;
}

void MainWindow::on_searchBtn_clicked()
{
    largestPalindrome = numOne + numTwo;
    largestPalindromeDisplay.setText(QString::number(largestPalindrome));
}

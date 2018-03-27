#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QIntValidator>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    result = 0;

    ui->lineEditDisplay->setReadOnly(true);
    ui->LDCNumberDisplay->setSegmentStyle(QLCDNumber::Flat);

    QValidator *validator = new QIntValidator(this);
    ui->inputOne->setValidator(validator);
    ui->inputTwo->setValidator(validator);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_searchBtn_clicked()
{
    numOne = ui->inputOne->text().toInt();
    numTwo = ui->inputTwo->text().toInt();

    result = findPalindrome(numOne, numTwo);

    ui->lineEditDisplay->setText(QString::number(result));
    ui->LDCNumberDisplay->display(result);
}

int MainWindow::findPalindrome(int lowerLimit, int upperLimit)
{
    int largestPalindrome = numOne + numTwo;

    return largestPalindrome;
}

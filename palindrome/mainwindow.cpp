#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QIntValidator>
#include <algorithm>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    result = 0;

    ui->resultTextDisplay->setReadOnly(true);
    ui->resultTextDisplay->setAlignment(Qt::AlignHCenter);
    ui->LDCNumberDisplay->setSegmentStyle(QLCDNumber::Flat);
    ui->LDCNumberDisplay->setDigitCount(9);
    ui->LDCNumberDisplay->display("---------");
    ui->statusBar->showMessage("Coded by Anthony Provencal, 2018");

    QValidator *validator = new QIntValidator(this);
    ui->inputOne->setValidator(validator);
    ui->inputOne->setAlignment(Qt::AlignHCenter);
    ui->inputOne->setFocusPolicy(Qt::StrongFocus);

    ui->inputOne->setText("0");
    ui->inputTwo->setValidator(validator);
    ui->inputTwo->setAlignment(Qt::AlignHCenter);
    ui->inputOne->setFocusPolicy(Qt::StrongFocus);
    ui->inputTwo->setText("0");

    ui->inputOne->selectAll();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_searchBtn_clicked()
{
    numOne = ui->inputOne->text().toInt();
    numTwo = ui->inputTwo->text().toInt();

    if (numOne > numTwo)
    {
        ui->resultTextDisplay->setText("Increase upper limit!");
        ui->LDCNumberDisplay->display("ERRoR");
    }
    else {
        result = findPalindrome(numOne, numTwo);

        if (result > 0)
        {
            ui->resultTextDisplay->setText(QString::number(result));
            ui->LDCNumberDisplay->display(result);
        }
        else {
            ui->resultTextDisplay->setText("No palindrome found!");
            ui->LDCNumberDisplay->display("---------");
        }
    }
}

int MainWindow::findPalindrome(int lowerLimit, int upperLimit)
{
    int largestPalindrome = -1;

    for (int i = upperLimit; i >= lowerLimit; i--)
    {
        QString currentNumber = QString::number(i);

        if(equal(currentNumber.begin(),
                 currentNumber.begin() + currentNumber.size()/2,
                 currentNumber.rbegin())) {
            largestPalindrome = i;
            break;
        }
    }

    return largestPalindrome;
}

void MainWindow::on_inputOne_editingFinished()
{
    if (ui->inputOne->text() == "")
        ui->inputOne->setText("0");
}

void MainWindow::on_inputOne_focusInEvent(QFocusEvent* e)
{
    ui->inputOne->QLineEdit::selectAll();
}

void MainWindow::on_inputTwo_editingFinished()
{
    if (ui->inputTwo->text() == "")
        ui->inputTwo->setText("0");
}

void MainWindow::on_inputTwo_focusInEvent(QFocusEvent* e)
{
    ui->inputTwo->QLineEdit::selectAll();
}

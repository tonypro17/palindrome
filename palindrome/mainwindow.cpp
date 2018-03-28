#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QIntValidator>
#include <algorithm>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    result = 0;

    // set up UI elements for displaying results
    ui->resultTextDisplay->setReadOnly(true);
    ui->resultTextDisplay->setAlignment(Qt::AlignHCenter);
    ui->LDCNumberDisplay->setSegmentStyle(QLCDNumber::Flat);
    ui->LDCNumberDisplay->setDigitCount(9);
    ui->LDCNumberDisplay->display("---------");
    ui->statusBar->showMessage("Coded by Anthony Provencal, 2018");

    // set up UI elements for inputting limits
    QValidator *validator = new QIntValidator(this);
    ui->inputOne->setValidator(validator);
    ui->inputOne->setAlignment(Qt::AlignHCenter);
    ui->inputOne->setText("0");
    ui->inputTwo->setValidator(validator);
    ui->inputTwo->setAlignment(Qt::AlignHCenter);
    ui->inputTwo->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_searchBtn_clicked()
{
    // get user input from limit boxes
    numOne = ui->inputOne->text().toInt();
    numTwo = ui->inputTwo->text().toInt();

    // check that lower limit is less than upper limit
    if (numOne > numTwo)
    {
        // if upper limit is less than lower, display error
        ui->resultTextDisplay->setText("Increase upper limit!");
        ui->LDCNumberDisplay->display("ERRoR");
    }
    else {
        // get largest palindrome using findPalindrome method
        result = findPalindrome(numOne, numTwo);

        if (result > 0)
        {
            // if a palindrome was found, display it
            ui->resultTextDisplay->setText(QString::number(result));
            ui->LDCNumberDisplay->display(result);
        }
        else {
            // if no palindrome found, display message, clear LCD
            ui->resultTextDisplay->setText("No palindrome found!");
            ui->LDCNumberDisplay->display("---------");
        }
    }
}

int MainWindow::findPalindrome(int lowerLimit, int upperLimit)
{
    // set default return value
    int largestPalindrome = -1;

    // start at upper limit and go down, break when palindrome is found
    for (int i = upperLimit; i >= lowerLimit; i--)
    {
        // convert integer to QString
        QString currentNumber = QString::number(i);

        // check if palindrome by comparing the first and second half of strings with each other.
        // if they are equal, number is a palindrome.
        if(equal(currentNumber.begin(),
                 currentNumber.begin() + currentNumber.size()/2,
                 currentNumber.rbegin())) {
            largestPalindrome = i;

            // break loop when palindrome is found (started loop at upper limit so the first palindrome found will always be the largest)
            break;
        }
    }

    // return palindrome found, or -1 if no palindrome found
    return largestPalindrome;
}

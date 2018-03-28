/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *searchBtn;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *inputTwo;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *inputOne;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *resultTextDisplay;
    QLCDNumber *LDCNumberDisplay;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(515, 286);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 511, 231));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(20);
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        searchBtn = new QPushButton(gridLayoutWidget);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));

        gridLayout_2->addWidget(searchBtn, 5, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 3, 1, 1);

        inputTwo = new QLineEdit(gridLayoutWidget);
        inputTwo->setObjectName(QStringLiteral("inputTwo"));

        gridLayout_2->addWidget(inputTwo, 3, 4, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setScaledContents(false);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setScaledContents(false);
        label_2->setWordWrap(true);

        gridLayout_2->addWidget(label_2, 4, 4, 1, 1);

        inputOne = new QLineEdit(gridLayoutWidget);
        inputOne->setObjectName(QStringLiteral("inputOne"));

        gridLayout_2->addWidget(inputOne, 3, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 5);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        gridLayout_2->addWidget(label_3, 3, 2, 1, 1);

        resultTextDisplay = new QLineEdit(gridLayoutWidget);
        resultTextDisplay->setObjectName(QStringLiteral("resultTextDisplay"));

        gridLayout_2->addWidget(resultTextDisplay, 4, 2, 1, 1);

        LDCNumberDisplay = new QLCDNumber(gridLayoutWidget);
        LDCNumberDisplay->setObjectName(QStringLiteral("LDCNumberDisplay"));

        gridLayout_2->addWidget(LDCNumberDisplay, 1, 0, 1, 5);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Palindrome Finder", nullptr));
        searchBtn->setText(QApplication::translate("MainWindow", "Search!", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Lower Limit</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Upper Limit</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Find a palindrome!</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">The largest palindrome between them is:</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

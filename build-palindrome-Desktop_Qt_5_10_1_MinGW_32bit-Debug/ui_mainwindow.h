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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *searchBtn;
    QSpinBox *inputOne;
    QSpinBox *inputTwo;
    QLineEdit *largestPalindromeDisplay;
    QMenuBar *menuBar;
    QMenu *menuFind_A_Palindrome;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        searchBtn = new QPushButton(centralWidget);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setGeometry(QRect(170, 170, 75, 23));
        inputOne = new QSpinBox(centralWidget);
        inputOne->setObjectName(QStringLiteral("inputOne"));
        inputOne->setGeometry(QRect(80, 90, 42, 22));
        inputTwo = new QSpinBox(centralWidget);
        inputTwo->setObjectName(QStringLiteral("inputTwo"));
        inputTwo->setGeometry(QRect(300, 90, 42, 22));
        largestPalindromeDisplay = new QLineEdit(centralWidget);
        largestPalindromeDisplay->setObjectName(QStringLiteral("largestPalindromeDisplay"));
        largestPalindromeDisplay->setGeometry(QRect(170, 90, 91, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuFind_A_Palindrome = new QMenu(menuBar);
        menuFind_A_Palindrome->setObjectName(QStringLiteral("menuFind_A_Palindrome"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFind_A_Palindrome->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        searchBtn->setText(QApplication::translate("MainWindow", "Search!", nullptr));
        menuFind_A_Palindrome->setTitle(QApplication::translate("MainWindow", "Find-A-Palindrome!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

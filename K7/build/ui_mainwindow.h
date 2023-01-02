/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBarOne;
    QProgressBar *progressBarTwo;
    QPushButton *switchPlayerOne;
    QPushButton *switchPlayerTwo;
    QPushButton *twoMinButton;
    QPushButton *fiveMinButton;
    QPushButton *startButton;
    QPushButton *stopButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        progressBarOne = new QProgressBar(centralwidget);
        progressBarOne->setObjectName(QString::fromUtf8("progressBarOne"));
        progressBarOne->setGeometry(QRect(130, 100, 118, 23));
        progressBarOne->setValue(24);
        progressBarTwo = new QProgressBar(centralwidget);
        progressBarTwo->setObjectName(QString::fromUtf8("progressBarTwo"));
        progressBarTwo->setGeometry(QRect(490, 100, 118, 23));
        progressBarTwo->setValue(24);
        switchPlayerOne = new QPushButton(centralwidget);
        switchPlayerOne->setObjectName(QString::fromUtf8("switchPlayerOne"));
        switchPlayerOne->setGeometry(QRect(130, 140, 91, 24));
        switchPlayerTwo = new QPushButton(centralwidget);
        switchPlayerTwo->setObjectName(QString::fromUtf8("switchPlayerTwo"));
        switchPlayerTwo->setGeometry(QRect(494, 140, 91, 24));
        twoMinButton = new QPushButton(centralwidget);
        twoMinButton->setObjectName(QString::fromUtf8("twoMinButton"));
        twoMinButton->setGeometry(QRect(240, 280, 75, 24));
        fiveMinButton = new QPushButton(centralwidget);
        fiveMinButton->setObjectName(QString::fromUtf8("fiveMinButton"));
        fiveMinButton->setGeometry(QRect(440, 280, 75, 24));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(170, 350, 101, 24));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(520, 350, 91, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 190, 441, 61));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        switchPlayerOne->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        switchPlayerTwo->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        twoMinButton->setText(QCoreApplication::translate("MainWindow", "120sec", nullptr));
        fiveMinButton->setText(QCoreApplication::translate("MainWindow", "5min", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "paskaaaaaa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

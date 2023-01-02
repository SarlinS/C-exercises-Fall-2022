#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBarOne->setValue(100);
    ui->progressBarTwo->setValue(100);
    pQTimer = new QTimer(this);
    setGameInfoText("Select playtime and press START GAME!", 14);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    if(currentPlayer == 1)
    {
        player1Time--;
    }
    else
    {
        player2Time--;
    }
    updateProgressBar();

    if(player1Time == 0)
    {
        setGameInfoText("Player 2 won!", 14);
        pQTimer->stop();
    }
    else if(player2Time == 0)
    {
        setGameInfoText("Player 1 won!", 14);
        pQTimer->stop();
    }
}

void MainWindow::on_stopButton_clicked()
{
    pQTimer->stop();
    setGameInfoText("New game via START GAME", 14);
}


void MainWindow::on_startButton_clicked()
{
    setGameInfoText("Game ongoing", 14);
    connect(pQTimer, SIGNAL(timeout()), this, SLOT (timeout()));
    pQTimer->start(1000);
    currentPlayer = 1;
}


void MainWindow::on_twoMinButton_clicked()
{
    setGameInfoText("Selected 120sec, ready to play", 14);
    gameTime = 120;
    ui->progressBarOne->setMaximum(gameTime);
    ui->progressBarTwo->setMaximum(gameTime);
    ui->progressBarOne->setMinimum(0);
    ui->progressBarTwo->setMinimum(0);
    ui->progressBarOne->setValue(gameTime);
    ui->progressBarTwo->setValue(gameTime);
    player1Time = gameTime;
    player2Time = gameTime;
}


void MainWindow::on_fiveMinButton_clicked()
{
    setGameInfoText("Selected 5min, ready to play", 14);
    gameTime = 300;
    ui->progressBarOne->setMaximum(gameTime);
    ui->progressBarTwo->setMaximum(gameTime);
    ui->progressBarOne->setMinimum(0);
    ui->progressBarTwo->setMinimum(0);
    ui->progressBarOne->setValue(gameTime);
    ui->progressBarTwo->setValue(gameTime);
    player1Time = gameTime;
    player2Time = gameTime;
}


void MainWindow::on_switchPlayerOne_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_switchPlayerTwo_clicked()
{
    currentPlayer = 1;
}

void MainWindow::updateProgressBar()
{
    if(currentPlayer == 1)
    {
        ui->progressBarOne->setValue(player1Time);
    }
    else if(currentPlayer == 2)
    {
        ui->progressBarTwo->setValue(player2Time);
    }
}

void MainWindow::setGameInfoText(QString text, short font)
{
    QFont f( "Arial", font, QFont::Bold);
        ui->label->setText(text);
        ui->label->setFont(f);
}


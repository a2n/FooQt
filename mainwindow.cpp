#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_released()
{
    qDebug() << Q_FUNC_INFO;
}

void MainWindow::on_stopButton_released()
{
    qDebug() << Q_FUNC_INFO;
}

void MainWindow::on_playButton_released()
{
    qDebug() << Q_FUNC_INFO;
}

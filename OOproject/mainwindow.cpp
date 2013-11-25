#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new myscene();
    scene->setSceneRect(0, 0, 400, 400);
    ui->graphicsView->setScene(scene);

    state = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    state = 1;
    scene->ToolNo = state;
}

void MainWindow::on_pushButton_2_clicked()
{
    state = 2;
    scene->ToolNo = state;
}

void MainWindow::on_pushButton_3_clicked()
{
    state = 3;
    scene->ToolNo = state;
}

void MainWindow::on_pushButton_4_clicked()
{
    state = 4;
    scene->ToolNo = state;
}

void MainWindow::on_pushButton_5_clicked()
{
    state = 5;
    scene->ToolNo = state;
}

void MainWindow::on_pushButton_6_clicked()
{
    state = 6;
    scene->ToolNo = state;
}

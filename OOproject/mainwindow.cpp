#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "associateswitch.h"
#include "switchcase.h"
#include "usecaseswitch.h"
#include "objectswitch.h"
#include "selectionswitch.h"
#include "generationswitch.h"
#include "compositeswitch.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new myscene();
    scene->setSceneRect(0, 0, 400, 400);
    ui->graphicsView->setScene(scene);
    scene->currentCase = new SelectionSwitch(scene);

    state = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    state = 1;
    scene->currentCase = new SelectionSwitch(scene);
    scene->ToolNo = state;
}

void MainWindow::on_pushButton_2_clicked()
{
    state = 2;
    scene->currentCase = new AssociateSwitch(scene);
    scene->ToolNo = state;
}

void MainWindow::on_pushButton_3_clicked()
{
    state = 3;
    scene->currentCase = new GenerationSwitch(scene);
    scene->ToolNo = state;
}

void MainWindow::on_pushButton_4_clicked()
{
    state = 4;
    scene->currentCase = new CompositeSwitch(scene);
    scene->ToolNo = state;
}

void MainWindow::on_pushButton_5_clicked()
{
    state = 5;
    scene->currentCase = new ObjectSwitch(scene);
    scene->ToolNo = state;
}

void MainWindow::on_pushButton_6_clicked()
{
    state = 6;
    scene->currentCase = new UseCaseSwitch(scene);
    scene->ToolNo = state;
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QtGui>
#include <QtCore>
#include <QMouseEvent>
#include <QGraphicsItem>
#include <QDebug>
#include <Qpainter>

#include "myscene.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    myscene *scene;
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
private:
    Ui::MainWindow *ui;
    QPointF startP , endP;
    int startx , starty , endx , endy;//滑鼠按下座標和放開座標(X座標要調整-54Y座標要調整+15對齊)
    int state;//畫圖的狀態
};

#endif // MAINWINDOW_H

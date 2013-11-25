#ifndef GENLINE_H
#define GENLINE_H

#include<Qpainter>
#include<Qdebug>
#include<QGraphicsItem>
#include<cmath>

class genline : public QGraphicsLineItem
{
public:
    genline(int sx , int sy , int ex , int ey);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    // update the position of this line
    void updatePos(int sx,int sy,int ex,int ey);
    int startx,starty,endx,endy;
    double vx , vy , inix , iniy , length;
    int num;//用來存自己是排陣列的第幾個物件
};

#endif // GENLINE_H

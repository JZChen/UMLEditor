#ifndef LINEOBJECT_H
#define LINEOBJECT_H

#include<QGraphicsItem>
#include<Qpainter>
#include<Qdebug>
#include<cmath>

class LineObject: public QGraphicsLineItem
{
public:
    LineObject();

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    int startx,starty,endx,endy,num;
    double vx , vy , inix , iniy , length;
};

#endif // LINEOBJECT_H

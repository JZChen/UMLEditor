#ifndef COMLINE_H
#define COMLINE_H

#include<Qpainter>
#include<Qdebug>
#include<QGraphicsItem>
#include<cmath>

#include "lineobject.h"

class comline : public LineObject
{
public:
    comline(int sx , int sy , int ex , int ey);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    /*
    int startx,starty,endx,endy,num;
    double vx , vy , inix , iniy , length;
    */

};

#endif // COMLINE_H

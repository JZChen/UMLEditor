#ifndef COMLINE_H
#define COMLINE_H

#include<Qpainter>
#include<Qdebug>
#include<QGraphicsItem>
#include<cmath>
#include<QGraphicsLineItem>

class comline : public QGraphicsLineItem
{
public:
    comline(int sx , int sy , int ex , int ey);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // COMLINE_H

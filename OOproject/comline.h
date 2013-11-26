#ifndef COMLINE_H
#define COMLINE_H

#include<Qpainter>
#include<Qdebug>
#include<QGraphicsItem>
#include<cmath>
#include<QGraphicsLineItem>
#include"umlobject.h"
#include"lineobject.h"

class comline : public LineObject
{
public:

    comline::comline(UMLObject *s,UMLObject *e);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // COMLINE_H

#ifndef GENLINE_H
#define GENLINE_H

#include<Qpainter>
#include<Qdebug>
#include<QGraphicsItem>
#include<cmath>
#include"umlobject.h"
#include"lineobject.h"

class genline : public LineObject
{
public:
    genline(UMLObject *s,UMLObject *e);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // GENLINE_H

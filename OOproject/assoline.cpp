#include "assoline.h"


assoline::assoline(int sx , int sy , int ex , int ey)
{
    this->setLine(sx,sy,ex,ey);
}


void assoline::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QGraphicsLineItem::paint(painter,option,widget);
    update();
}


void assoline::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    QGraphicsItem::mousePressEvent(event);
}

void assoline::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

    QGraphicsItem::mouseReleaseEvent(event);
}

void assoline::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{

}



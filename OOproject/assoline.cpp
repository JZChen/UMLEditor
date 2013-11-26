#include "assoline.h"


assoline::assoline(UMLObject *s,UMLObject *e)
{
    this->port0 = s;
    this->port1 = e;

    setLine(s->pos().x(),s->pos().y(),e->pos().y(),e->pos().y());
}


void assoline::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawLine(port0->scenePos(),port1->scenePos());
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



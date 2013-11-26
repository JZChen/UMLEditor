#include "lineobject.h"
#include <QGraphicsLineItem>

LineObject::LineObject()
{
}

LineObject::LineObject(UMLObject *s,UMLObject *e)
{
    port0 = s;
    port1 = e;
    p0 = 0; p1 = 0;
    QGraphicsLineItem::setLine(port0->pos().x(),port0->pos().y(),port1->pos().x(),port1->pos().y());

}


void LineObject::setFlag(GraphicsItemFlag flag, bool enabled)
{
    if( flag == ItemIsMovable || flag == ItemIsSelectable )
        return;

    QGraphicsLineItem::setFlag(flag,enabled);
}

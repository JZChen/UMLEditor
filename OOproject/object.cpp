#include "object.h"

object::object(int sx , int sy)
{
    setPos(sx,sy);
}


QRectF object::boundingRect() const
{
    return QRectF(0,0,60,60);
}

void object::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QBrush brush1(Qt::blue);
    QBrush brush2(Qt::white);
    painter->fillRect( this->boundingRect() , brush2 );
    painter->drawRect( this->boundingRect() );

    if( isSelected() ){
        painter->fillRect( QRectF(28,0,5,5),brush1  );
        painter->fillRect( QRectF(28,55,5,5),brush1  );
        painter->fillRect( QRectF(0,28,5,5),brush1  );
        painter->fillRect( QRectF(55,28,5,5),brush1  );
    }


}


void object::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    QGraphicsItem::mousePressEvent(event);
}

void object::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    QGraphicsItem::mouseMoveEvent(event);
}

void object::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}

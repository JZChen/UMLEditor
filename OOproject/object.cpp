#include "object.h"

object::object(int sx , int sy)
{

    setPos(sx,sy);
}


QRectF object::boundingRect() const
{
    return QRectF(this->pos().x(),this->pos().y(),60,60);
}

void object::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //painter->fillRect(QRectF(this->pos().x()+10,this->pos().y()+10,100,100),brush);

    /*
    painter->drawPoint( this->pos() );


    QRectF rectangle(10.0, 20.0, 80.0, 60.0);
    painter->drawRect( this->boundingRect() );
    */

    painter->drawRect( this->boundingRect() );

    //qDebug()<<  this->boundingRect().center() ;
    //painter->drawRect( this->pos().x()-60 , this->pos().y()-60 , 120 ,120 );
    //update();

}


void object::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    QGraphicsItem::mousePressEvent(event);
}

void object::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseMoveEvent(event);
}

void object::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseReleaseEvent(event);
}

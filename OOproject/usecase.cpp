#include "usecase.h"

usecase::usecase(int sx , int sy )
{
    setPos(sx,sy);

}

QRectF usecase::boundingRect() const
{
    return QRectF(0 , 0 , 60 , 60);
}

void usecase::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QBrush brush1(Qt::blue);
    QBrush brush2(Qt::white);
    painter->fillRect( this->boundingRect() , brush2 );
    painter->drawEllipse( this->boundingRect() );



    if( isSelected() ){
        painter->fillRect( QRectF(28,0,5,5),brush1  );
        painter->fillRect( QRectF(28,55,5,5),brush1  );
        painter->fillRect( QRectF(0,28,5,5),brush1  );
        painter->fillRect( QRectF(55,28,5,5),brush1  );
    }


    update();
}

void usecase::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mousePressEvent(event);
}

void usecase::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseReleaseEvent(event);
}

void usecase::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseDoubleClickEvent(event);
}

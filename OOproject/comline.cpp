#include "comline.h"
comline::comline(int sx , int sy , int ex , int ey)
{
   QGraphicsLineItem::setLine(sx,sy,ex,ey);
}

void comline::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    /*
    QPolygon polygon;
    QPen blackpen(Qt::black,3);
    painter->setPen(blackpen);

    vx = endx - startx;//線的x向量
    vy = endy - starty;

    inix = pow(vx , 2);//正規化使用x的平方
    iniy = pow(vy , 2);//正規化使用y的平方
    length = pow(inix + iniy,0.5)/20;

    painter->drawLine(startx,starty,endx,endy);
    polygon << QPoint( endx + (vx/length) , endy + (vy/length) )
                << QPoint( endx - (vy/length) , endy + (vx/length) )
                << QPoint( endx + (vy/length) , endy - (vx/length) );
    painter->drawPolygon(polygon);
    */
    update();
}


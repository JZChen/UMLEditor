#include "comline.h"
#include "umlobject.h"



comline::comline(UMLObject *s,UMLObject *e)
{
    this->port0 = s;
    this->port1 = e;

    setLine(s->pos().x(),s->pos().y(),e->pos().y(),e->pos().y());
}


void comline::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPolygon polygon;
    QPen blackpen(Qt::black,3);
    painter->setPen(blackpen);

    double vx = port1->scenePos().x()+port1->getPortPos(p1).x() - port0->scenePos().x()+port0->getPortPos(p0).x();//線的x向量
    double vy = port1->scenePos().y()+port1->getPortPos(p1).y() - port0->scenePos().y()+port0->getPortPos(p0).y();
    int endx = port1->scenePos().x()+port1->getPortPos(p1).x();
    int endy = port1->scenePos().y()+port1->getPortPos(p1).y();
    double inix = pow(vx , 2);//正規化使用x的平方
    double iniy = pow(vy , 2);//正規化使用y的平方
    double length = pow(inix + iniy,0.5)/10;


    polygon << QPoint( endx + (vx/length) , endy + (vy/length) )
            << QPoint( endx - (vy/length)+(vx/length)/2 , endy + (vx/length) +(vy/length)/2 )
            << QPoint( endx , endy )
            << QPoint( endx + (vy/length) +(vx/length)/2 , endy - (vx/length) +(vy/length)/2 );

    painter->drawPolygon(polygon);
    painter->drawLine(port0->scenePos()+ port0->getPortPos(p0) ,port1->scenePos()+ port1->getPortPos(p1));
    update();
}


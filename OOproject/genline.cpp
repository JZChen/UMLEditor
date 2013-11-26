#include "genline.h"

genline::genline(UMLObject *s,UMLObject *e)
{
    this->port0 = s;
    this->port1 = e;

    setLine(s->pos().x(),s->pos().y(),e->pos().y(),e->pos().y());

}

void genline::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPolygon polygon;
    QPen blackpen(Qt::black,3);
    painter->setPen(blackpen);

    double vx = port1->scenePos().x() - port0->scenePos().x();//線的x向量
    double vy = port1->scenePos().y()- port0->scenePos().y();
    int endx = port1->scenePos().x();
    int endy = port1->scenePos().y();
    double inix = pow(vx , 2);//正規化使用x的平方
    double iniy = pow(vy , 2);//正規化使用y的平方
    double length = pow(inix + iniy,0.5)/20;

    // draw the triangle
    polygon << QPoint( endx + (vx/length) , endy + (vy/length) )
            << QPoint( endx - (vy/length) , endy + (vx/length) )
            << QPoint( endx + (vy/length) , endy - (vx/length) );

    painter->drawPolygon(polygon);


    painter->drawLine(port0->scenePos(),port1->scenePos());
    update();
}


#ifndef OBJECT_H
#define OBJECT_H

#include <Qdebug>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <Qpainter>
#include <QGraphicsItem>
#include <QPoint>
#include <QGraphicsSceneMouseEvent>
#include "lineobject.h"

class object : public QGraphicsItem
{
public:
    object(int sx , int sy);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int startx , starty , endx , endy;
    int startx1 , starty1;
    bool selected,selected1,released;
    QRectF rec;
    int num , renum;
    QPointF startP , endP , LineS , LineE ;//連線使用
    int maxxp, maxyp;
    int reobjnum(int n);
    QList<LineObject*> lineHeadCollection,lineEndCollection;

protected:
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

};

#endif // OBJECT_H


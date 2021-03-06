#ifndef OBJECT_H
#define OBJECT_H

#include <Qdebug>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <Qpainter>
#include <QGraphicsItem>
#include <QPoint>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsLineItem>
#include <QVector>
#include "umlobject.h"

class object : public UMLObject
{
public:
    object(int sx , int sy);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QVector<QGraphicsLineItem> ports[4];


protected:
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

};

#endif // OBJECT_H


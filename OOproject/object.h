#ifndef OBJECT_H
#define OBJECT_H

#include <Qdebug>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <Qpainter>
#include <QGraphicsItem>
#include <QPoint>
#include <QGraphicsSceneMouseEvent>

class object : public QGraphicsItem
{
public:
    object(int sx , int sy);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

};

#endif // OBJECT_H


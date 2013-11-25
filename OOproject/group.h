#ifndef GROUP_H
#define GROUP_H

#include <Qdebug>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <Qpainter>
#include <QGraphicsItem>
#include <QPoint>
#include <QGraphicsSceneMouseEvent>

class group :public QGraphicsItem
{
    public:
        group(int sx , int sy );
protected:
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

};

#endif // GROUP_H

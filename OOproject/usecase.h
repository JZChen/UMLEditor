#ifndef USECASE_H
#define USECASE_H

#include <Qdebug>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <Qpainter>
#include <QGraphicsItem>
#include <QPen>
#include <QGraphicsSceneDragDropEvent>
#include <QString>
#include <QInputDialog>
#include "umlobject.h"

class usecase : public UMLObject
{
    public:
        usecase(int sx , int sy );
        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


    protected:
        void mousePressEvent(QGraphicsSceneMouseEvent *event);
        void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
        void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
};


#endif // USECASE_H


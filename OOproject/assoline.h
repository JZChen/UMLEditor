#ifndef ASSOLINE_H
#define ASSOLINE_H

#include <Qdebug>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <Qpainter>
#include <QGraphicsItem>
#include <QPen>
#include <QGraphicsSceneDragDropEvent>
#include <QString>
#include <QInputDialog>
#include <QGraphicsLineItem>
#include "lineobject.h"
#include "umlobject.h"

class assoline : public LineObject
{
    public:

        assoline(UMLObject *s,UMLObject *e);
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


    protected:
        void mousePressEvent(QGraphicsSceneMouseEvent *event);
        void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
        void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
};

#endif // ASSOLINE_H

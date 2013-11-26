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

class assoline : public QGraphicsLineItem
{
    public:

        assoline(int sx , int sy , int ex , int ey);
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
        /*
        int startx , starty , endx , endy;
        bool selected;
        bool selected1;
        QRectF rec;
        int num;
        QString str;
        */

    protected:
        void mousePressEvent(QGraphicsSceneMouseEvent *event);
        void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
        void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
};

#endif // ASSOLINE_H

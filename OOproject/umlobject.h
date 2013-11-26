#ifndef UMLOBJECT_H
#define UMLOBJECT_H

#include <QGraphicsItem>

class UMLObject : public QGraphicsItem
{

public:
    UMLObject();
    UMLObject(int sx , int sy);
    void setSelection(bool enable);
    /*
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    */
    QVector<QGraphicsLineItem> ports[4];

/*
protected:
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
*/
};


#endif // UMLOBJECT_H

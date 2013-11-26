#ifndef UMLOBJECT_H
#define UMLOBJECT_H

#include <QGraphicsItem>

class UMLObject : public QGraphicsItem
{

public:
    UMLObject();
    UMLObject(int sx , int sy);
    void setSelection(bool enable);
    int getPortNumber(QPoint pt);
    QPoint getPortPos(int portNumber);
    QVector<QGraphicsLineItem> ports[4];

/*
protected:
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
*/
};


#endif // UMLOBJECT_H

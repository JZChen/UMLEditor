#ifndef OBJECTSWITCH_H
#define OBJECTSWITCH_H

#include"switchcase.h"
#include<QGraphicsScene>

class ObjectSwitch : public SwitchCase
{
public:
    ObjectSwitch(QGraphicsScene *scene);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
};

#endif // OBJECTSWITCH_H

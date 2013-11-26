#ifndef USECASESWITCH_H
#define USECASESWITCH_H

#include<QGraphicsScene>
#include"switchcase.h"

class UseCaseSwitch : public SwitchCase
{
public:
    UseCaseSwitch(QGraphicsScene *scene);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
};

#endif // USECASESWITCH_H

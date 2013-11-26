#ifndef COMPOSITESWITCH_H
#define COMPOSITESWITCH_H

#include<QGraphicsScene>
#include"switchcase.h"


class CompositeSwitch : public SwitchCase
{
public:
    CompositeSwitch(QGraphicsScene *scene);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
private:
    QGraphicsItem *firstItem,*secItem;
    int sx,sy,ex,ey;
};

#endif // COMPOSITESWITCH_H

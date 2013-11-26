#ifndef ASSOCIATESWITCH_H
#define ASSOCIATESWITCH_H

#include<QGraphicsScene>
#include"switchcase.h"

class AssociateSwitch : public SwitchCase
{
public:
    AssociateSwitch(QGraphicsScene *scene);

    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
private:
    QGraphicsItem *firstItem,*secItem;
    int sx,sy,ex,ey;
};

#endif // ASSOCIATESWITCH_H

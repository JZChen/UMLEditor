#ifndef GENERATIONSWITCH_H
#define GENERATIONSWITCH_H

#include<QGraphicsScene>
#include"switchcase.h"


class GenerationSwitch : public SwitchCase
{
public:
    GenerationSwitch(QGraphicsScene *scene);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
private:
    QGraphicsItem *firstItem,*secItem;
    int sx,sy,ex,ey;
};

#endif // GENERATIONSWITCH_H

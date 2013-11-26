#ifndef SELECTIONSWITCH_H
#define SELECTIONSWITCH_H

#include<QGraphicsScene>
#include"switchcase.h"


class SelectionSwitch : public SwitchCase
{
public:
    SelectionSwitch(QGraphicsScene *scene);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

private:
    QGraphicsItem *currentItem;
};

#endif // SELECTIONSWITCH_H

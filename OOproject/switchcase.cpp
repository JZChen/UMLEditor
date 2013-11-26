#include "switchcase.h"


SwitchCase::SwitchCase()
{

}



SwitchCase::SwitchCase(QGraphicsScene *scene)
{
    this->currentScene = scene;
}


void SwitchCase::setSelection(bool enable)
{
    foreach( QGraphicsItem *item , currentScene->items()){
        //item->setFlag(QGraphicsItem::ItemIsMovable,enable);
        item->setFlag(QGraphicsItem::ItemIsSelectable,enable);
    }
}

void SwitchCase::setMovable(bool enable)
{
    foreach( QGraphicsItem *item , currentScene->items()){
        item->setFlag(QGraphicsItem::ItemIsMovable,enable);
        //item->setFlag(QGraphicsItem::ItemIsSelectable,enable);
    }
}


void SwitchCase::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

}

void SwitchCase::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

}

void SwitchCase::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{

}

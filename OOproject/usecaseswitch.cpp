#include "usecaseswitch.h"
#include "usecase.h"

UseCaseSwitch::UseCaseSwitch(QGraphicsScene *scene)
{
    currentScene = scene;
    this->setSelection(false);
    this->setMovable(false);
}



void UseCaseSwitch::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    usecase *obj = new usecase(event->scenePos().x(),event->scenePos().y());
    currentScene->addItem(obj);
}

void UseCaseSwitch::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

}

void UseCaseSwitch::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{

}

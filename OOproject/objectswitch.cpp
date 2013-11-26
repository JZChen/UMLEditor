#include "objectswitch.h"
#include "object.h"


ObjectSwitch::ObjectSwitch(QGraphicsScene *scene)
{
    currentScene = scene;
    this->setSelection(false);
    this->setMovable(false);
}

void ObjectSwitch::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    object *obj = new object(event->scenePos().x(),event->scenePos().y());
    currentScene->addItem(obj);
}

void ObjectSwitch::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

}

void ObjectSwitch::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{

}

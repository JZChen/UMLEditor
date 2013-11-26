#include "compositeswitch.h"
#include "comline.h"

CompositeSwitch::CompositeSwitch(QGraphicsScene *scene)
{
    currentScene = scene;
    this->setSelection(false);
    this->setMovable(false);
}



void CompositeSwitch::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    sx = event->scenePos().x();
    sy = event->scenePos().y();

    firstItem = currentScene->itemAt(event->scenePos() , QTransform() );

    if( firstItem )
        qDebug()<<"Got one" << firstItem->pos();

}

void CompositeSwitch::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    ex = event->scenePos().x();
    ey = event->scenePos().y();

    secItem = currentScene->itemAt(event->scenePos() , QTransform() );


    if( secItem && firstItem){
        qDebug()<<"Got one too" << secItem->pos();
        comline *ln = new comline((UMLObject*)firstItem,(UMLObject*)secItem);
        currentScene->addItem(ln);
    }




}

void CompositeSwitch::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    ex = event->scenePos().x();
    ey = event->scenePos().y();


}

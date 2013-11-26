#include "generationswitch.h"
#include "genline.h"

GenerationSwitch::GenerationSwitch(QGraphicsScene *scene)
{
    currentScene = scene;
    this->setSelection(false);
    this->setMovable(false);;
}



void GenerationSwitch::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    sx = event->scenePos().x();
    sy = event->scenePos().y();

    firstItem = currentScene->itemAt(event->scenePos() , QTransform() );

    /*
    if( firstItem )
        qDebug()<<"Got one" << firstItem->pos();
    */
}

void GenerationSwitch::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    ex = event->scenePos().x();
    ey = event->scenePos().y();

    secItem = currentScene->itemAt(event->scenePos() , QTransform() );


    if( secItem && firstItem){
        //qDebug()<<"Got one too" << secItem->pos();
        genline *ln = new genline((UMLObject*)firstItem,(UMLObject*)secItem);
        currentScene->addItem(ln);
    }




}

void GenerationSwitch::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    ex = event->scenePos().x();
    ey = event->scenePos().y();


}

#include "selectionswitch.h"
#include <QTransform>

SelectionSwitch::SelectionSwitch(QGraphicsScene *scene)
{
    currentScene = scene;
    this->setSelection(true);
    this->setMovable(true);

}



void SelectionSwitch::mousePressEvent(QGraphicsSceneMouseEvent *event)
{


    /*
    QList<QGraphicsItem*> items = currentScene->itemAt(event->scenePos() , trans );
    //qDebug()<<"Got one";
    qDebug()<< items.count() ;

    if( items.count() > 0){
        currentItem = items.at(0);

        qDebug()<<"Got one";
    }
    */

}

void SelectionSwitch::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    //currentItem = NULL;
}

void SelectionSwitch::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{

    /*
    if( currentItem != NULL){
        qDebug()<<"Break down here";
        currentItem->setPos( event->screenPos() );
    }
    */

}

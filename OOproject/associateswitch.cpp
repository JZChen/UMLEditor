#include "associateswitch.h"
#include "assoline.h"
#include <QGraphicsItem>

AssociateSwitch::AssociateSwitch(QGraphicsScene *scene)
{
    currentScene = scene;
    this->setSelection(false);
    this->setMovable(false);
}



void AssociateSwitch::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    sx = event->scenePos().x();
    sy = event->scenePos().y();

    firstItem = currentScene->itemAt(event->scenePos() , QTransform() );

    /*
    if( firstItem )
        qDebug()<<"Got one" << firstItem->pos();
    */
}

void AssociateSwitch::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    ex = event->scenePos().x();
    ey = event->scenePos().y();

    secItem = currentScene->itemAt(event->scenePos() , QTransform() );


    if( secItem && firstItem){
        //qDebug()<<"Got one too" << secItem->pos();
        assoline *ln = new assoline((UMLObject*)firstItem,(UMLObject*)secItem);

        int p0 = (UMLObject*)( firstItem )->getPortNumber( QPoint(sx,sy));
        int p1 = (UMLObject*)( secItem )->getPortNumber( QPoint(ex,ey));

        currentScene->addItem(ln);
    }




}

void AssociateSwitch::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    ex = event->scenePos().x();
    ey = event->scenePos().y();


}

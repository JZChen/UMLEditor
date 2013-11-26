#include "myscene.h"

myscene::myscene()
{
    glinecount = 0;
    alinecount = 0;
    objcount = 0;
    uccount = 0;
    clinecount = 0;
    objselected = -1;//讓al->num和ol->num全都不等於它才可讓全部成為false
                     //，並且點到空白處時會隱藏port(code會先跑這邊才去跑物件的mousepressevent)
    count=0;
}

void myscene::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    foreach(QGraphicsItem *item , this->items() ){
        painter->drawRect( item->boundingRect() );
    }

    update();
}

void myscene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    startx = event->scenePos().x();
    starty = event->scenePos().y();


    update();
}

void myscene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    QGraphicsScene::mouseMoveEvent(event);

}


void myscene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    endx = event->scenePos().x();
    endy = event->scenePos().y();


    assoline *line = new assoline(startx,starty,endx,endy);
    this->addItem(line);

    object *obj = new object(startx,starty);
    this->addItem(obj);
    //qDebug()<<"Obj"<<obj->pos();
    QGraphicsScene::mouseReleaseEvent(event);
    update();
}


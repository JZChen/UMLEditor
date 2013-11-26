#include "myscene.h"

myscene::myscene()
{

}

void myscene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    currentCase->mousePressEvent(event);


    startx = event->scenePos().x();
    starty = event->scenePos().y();


/*

    object *obj = new object(sstartx,starty);
    this->addItem(obj);

    usecase *ucase = new usecase(startx,starty);
    this->addItem(ucase);
*/
    update();
    QGraphicsScene::mousePressEvent(event);
}

void myscene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    currentCase->mouseMoveEvent(event);
    update();
    QGraphicsScene::mouseMoveEvent(event);

}


void myscene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    currentCase->mouseReleaseEvent(event);

    endx = event->scenePos().x();
    endy = event->scenePos().y();

/*
    assoline *line = new assoline(startx,starty,endx,endy);
    this->addItem(line);
*/
    //qDebug()<<"Obj"<<obj->pos();
    update();
    QGraphicsScene::mouseReleaseEvent(event);


}


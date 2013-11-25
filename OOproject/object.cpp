#include "object.h"

object::object(int sx , int sy)
{
    setFlag(ItemIsSelectable , true);
    setFlag(ItemIsMovable , true);
    startx = sx;//傳入的x和y去畫
    starty = sy;
    selected = false;
    selected1 = false;
    released = false;
    startx1=startx;
    starty1=starty;
    renum =-1;
    /*
    lineHeadCollection = new QList<LineObject>();
    lineEndCollection = new QList<LineObject>();
    */
}

QRectF object::boundingRect() const
{
    return QRectF(startx,starty,120,120);
}

void object::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QBrush brush(Qt::white);
    QBrush brush1(Qt::blue);
    QPen blackpen(Qt::black,3);

    painter->setPen(blackpen);
    rec = boundingRect();
    //painter->fillRect(rec,brush1);
    painter->fillRect(QRectF(startx+10,starty+10,100,100),brush);//只著中間100*100範圍外框多10到邊界
    painter->drawRect(startx+10 , starty+10 , 100 ,100);
    painter->drawLine(startx+10 , starty+43 , startx+110 , starty+43);
    painter->drawLine(startx+10 , starty+76 , startx+110 , starty+76);

    if(selected)//||selected1)//若被選擇才畫出port
    {
       // qDebug()<<"select num:"<<num;
        renum = num;
        painter->drawRect(startx+55,starty,10,10);//畫4個port上
        painter->drawRect(startx+55,starty+110,10,10);//下
        painter->drawRect(startx,starty+55,10,10);//左
        painter->drawRect(startx+110,starty+55,10,10);//右
        painter->fillRect(QRectF(startx+55,starty,10,10),brush1);//4個port填藍色
        painter->fillRect(QRectF(startx+55,starty+110,10,10),brush1);
        painter->fillRect(QRectF(startx,starty+55,10,10),brush1);
        painter->fillRect(QRectF(startx+110,starty+55,10,10),brush1);
        reobjnum(renum);
    }
    renum =-1;
    update();
}

int object::reobjnum(int n)
{
    return n;
}

void object::mousePressEvent(QGraphicsSceneMouseEvent *event)
{//maxyp
    selected = true;
   //released = false;
    startP = event->scenePos();

    qDebug()<<startx+60<<","<<starty+5;
    if((startP.x()-startP.y()+starty1-startx1)>0)
    {
        if((-startP.x()-startP.y()+starty1+startx1+120)>0)
        {
            LineS.setX(startx1+60);
            LineS.setY(starty1+5);
            qDebug()<<"port:"<<"1"<<","<<LineS;
        }
        else if((-startP.x()-startP.y()+starty1+startx1+120)<0)
        {
            LineS.setX(startx1+115);
            LineS.setY(starty1+60);
            qDebug()<<"port:"<<"2";
        }
    }
    else if((startP.x()-startP.y()+starty1-startx1)<0)
    {
        if((-startP.x()-startP.y()+starty1+startx1+120)>0)
        {
            LineS.setX(startx1+5);
            LineS.setY(starty1+60);
            qDebug()<<"port:"<<"4";
        }
        else if((-startP.x()-startP.y()+starty1+startx1+120)<0)
        {
            LineS.setX(startx1+60);
            LineS.setY(starty1+115);
            qDebug()<<"port:"<<"3";
        }
    }

    qDebug()<<startP;
    QGraphicsItem::mousePressEvent(event);
}

void object::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{

     //qDebug()<<"mouseMoveEvent";
/*
     startx1 = (-startP.x()+endP.x())+startx1;
     starty1 = (-startP.y()+endP.y())+starty1;
     selected1 =true;*/

    event->scenePos().x();
    event->scenePos().y();
    foreach(LineObject *line , lineEndCollection){
       /*
        line->startx = this->startx +60;
        line->starty = this->starty + 5;
       */
    }

    qDebug()<<"Mov QDIN"<< event->scenePos().x() << event->scenePos().y()<<"\n";
    qDebug()<<"Mov Frame"<< this->pos() <<"\n";

    foreach(LineObject *line , lineHeadCollection){

        line->startx = this->pos().x();
        line->starty = this->pos().y();

    }
    QGraphicsItem::mouseMoveEvent(event);
}

void object::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    selected = true;
   //released = false;
    startP = event->scenePos();

    qDebug()<<startx+60<<","<<starty+5;
    if((startP.x()-startP.y()+starty1-startx1)>0)
    {
        if((-startP.x()-startP.y()+starty1+startx1+120)>0)
        {
            LineS.setX(startx1+60);
            LineS.setY(starty1+5);
            qDebug()<<"port:"<<"1"<<","<<LineS;
        }
        else if((-startP.x()-startP.y()+starty1+startx1+120)<0)
        {
            LineS.setX(startx1+115);
            LineS.setY(starty1+60);
            qDebug()<<"port:"<<"2";
        }
    }
    else if((startP.x()-startP.y()+starty1-startx1)<0)
    {
        if((-startP.x()-startP.y()+starty1+startx1+120)>0)
        {
            LineS.setX(startx1+5);
            LineS.setY(starty1+60);
            qDebug()<<"port:"<<"4";
        }
        else if((-startP.x()-startP.y()+starty1+startx1+120)<0)
        {
            LineS.setX(startx1+60);
            LineS.setY(starty1+115);
            qDebug()<<"port:"<<"3";
        }
    }

    qDebug()<<startP;
    QGraphicsItem::mousePressEvent(event);


    /*
    //selected1 = true;
    //released=true;
    endP = event->scenePos();
    qDebug()<<startx<<","<<starty;

    if(selected1)//檢查是否3畫線
    {
        startx1 = (-startP.x()+endP.x())+startx1;
        starty1 = (-startP.y()+endP.y())+starty1;
    }
    qDebug()<<startx1<<","<<starty1;
    QGraphicsItem::mouseReleaseEvent(event);
    */
}

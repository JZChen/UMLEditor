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
void myscene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    startx = event->scenePos().x();
    starty = event->scenePos().y();

    if(ToolNo==1||ToolNo==3)
    {

        foreach(usecase *ua, uarray)//因為只有被點的會變成true其他全都變false
        {
             ua->selected = false;
        }
        foreach(object *ol, oarray)
        {
             ol->selected = false;
        }
        if(ToolNo==1)
        {
            foreach (object *ol, oarray)
            {
                ol->selected1=true;
                ol->setFlag(QGraphicsItem::ItemIsMovable , true);
            }
        }
        if(ToolNo==3)
        {
            foreach (object *ol, oarray)
            {
              ol->selected1=false;
              ol->setFlag(QGraphicsItem::ItemIsMovable,false);

            }

        }
        //qDebug()<<"selected num: "<<count;
        QGraphicsScene::mousePressEvent(event);//selected
    }

    if(ToolNo==5)
    {
        obj = new object(startx-50,starty-50);
        this->addItem(obj);
        oarray.append(obj);//存到陣列中
        oarray[objcount]->num = objcount;//存自己是陣列中第幾個排序
        objcount++;//存下個使用
    }
    else if(ToolNo ==6)
    {
        uc = new usecase(startx-50,starty-50);
        this->addItem(uc);
        uarray.append(uc);//存到陣列中
        //qDebug()<<uarray[uccount]->startx<<","<<uarray[uccount]->starty;
        uarray[uccount]->num = uccount;//存自己是陣列中第幾個排序
        uccount++;//存下個使用
    }

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

    foreach(usecase *ua, uarray)//因為只有被點的會變成true其他全都變false
    {
         if(ua->selected)
             count = ua->num;
    }
    foreach(object *ol, oarray)
    {
         if(ol->selected)
             count = ol->num;
    }
    //qDebug()<<"count: "<<count;


    if(ToolNo == 3)
    {

        object *obj;
        foreach (object *ol, oarray)
        {
          //ol->mouseReleaseEvent(event);
          if(ol->selected)
          {

            startx=ol->LineS.x();
            starty=ol->LineS.y();
            obj = ol;
          }

        }
        //存
        //qDebug()<<"selected num: "<<count;
        cline = new comline(startx,starty,endx,endy);
        obj->lineHeadCollection.append(cline);

        this->addItem(cline);
        carray.append(cline);//存到陣列中
        carray[clinecount]->num = clinecount;//存自己是陣列中第幾個排序
        clinecount++;
    }
    else if(ToolNo==4)
    {
        gline = new genline(startx,starty,endx,endy);//建一個新的genline物件
        this->addItem(gline);//畫出來
        garray.append(gline);//存到陣列中
        garray[glinecount]->num = glinecount;//存自己是陣列中第幾個排序
        glinecount++;//存下個使用
        //garray.insert( 4, gline );//塞到第四格
    }

    QGraphicsScene::mouseReleaseEvent(event);
    update();
}


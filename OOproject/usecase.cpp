#include "usecase.h"

usecase::usecase(int sx , int sy )
{
    setFlag(ItemIsSelectable , true);
    setFlag(ItemIsMovable ,true);
    startx = sx;//傳入的x和y去畫
    starty = sy;
    selected = false;
    str=" ";
}

QRectF usecase::boundingRect() const
{
    return QRectF(startx , starty , 130 , 100);
}

void usecase::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QBrush brush(Qt::white);
    QBrush brush1(Qt::blue);
    QPen blackpen(Qt::black,3);

    painter->setPen(blackpen);
    rec = boundingRect();
    //painter->fillRect(rec,brush1);
    painter->fillRect(QRectF(startx+15,starty+25,100,50),brush);
    painter->drawEllipse(startx+15,starty+25,100,50);

    if(selected)
    {

        painter->drawRect(startx+60,starty+15,10,10);//畫4個port
        painter->drawRect(startx+60,starty+75,10,10);
        painter->drawRect(startx+5,starty+45,10,10);
        painter->drawRect(startx+115,starty+45,10,10);

        QFont font=painter->font() ;
        font.setPointSize(20);
        painter->setFont(font);
        painter->drawText(QRectF(startx+15,starty+25,100,50),Qt::AlignCenter|Qt::AlignVCenter,str);

        painter->fillRect(QRectF(startx+60,starty+15,10,10),brush1);//4個port填藍色
        painter->fillRect(QRectF(startx+60,starty+75,10,10),brush1);
        painter->fillRect(QRectF(startx+5,starty+45,10,10),brush1);
        painter->fillRect(QRectF(startx+115,starty+45,10,10),brush1);
    }
    update();
}

void usecase::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    selected = true;
    QGraphicsItem::mousePressEvent(event);
}

void usecase::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseReleaseEvent(event);
}

void usecase::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{

    bool isOK;
    str = QInputDialog::getText(NULL, "Name",
                                         "Please input name",
                                         QLineEdit::Normal,
                                         " ", &isOK);
}

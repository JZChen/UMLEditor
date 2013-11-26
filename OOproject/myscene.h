#ifndef MYSCENE_H
#define MYSCENE_H

#include <QGraphicsScene>
#include <QDebug>
#include <QGraphicsSceneMoveEvent>
#include <QObject>
#include <QGraphicsItem>
#include <QDebug>
#include <Qpainter>

#include "usecase.h"
#include "assoline.h"
#include "object.h"
#include "myscene.h"
#include "comline.h"
#include "genline.h"

class myscene: public QGraphicsScene
{
    Q_OBJECT
    public:
        myscene();
        int startx , starty , endx , endy ;
       // int *startx1,*starty1;
        int ToolNo;

        int alinecount;
        QList<assoline*> aarray;
        assoline *aline;

        int objcount;
        QList<object*> oarray;
        object *obj;

        int uccount;
        QList<usecase*> uarray;
        usecase *uc;

        int clinecount;

        comline *cline;

        int glinecount;
        QList<genline*> garray;
        genline *gline;
        int objselected;

        int count;

        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    protected:
        void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
        void mousePressEvent(QGraphicsSceneMouseEvent *event);
        void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

};

#endif // MYSCENE_H

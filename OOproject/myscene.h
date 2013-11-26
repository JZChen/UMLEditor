#ifndef MYSCENE_H
#define MYSCENE_H

#include <QGraphicsScene>
#include <QDebug>
#include <QGraphicsSceneMoveEvent>
#include <QObject>
#include <QGraphicsItem>
#include <QDebug>
#include <Qpainter>
#include <QList>
#include "usecase.h"
#include "assoline.h"
#include "object.h"
#include "myscene.h"
#include "comline.h"
#include "genline.h"
#include "switchcase.h"


class myscene: public QGraphicsScene
{
    Q_OBJECT
    public:
        myscene();
        int startx , starty , endx , endy ;
        int ToolNo;
        SwitchCase *currentCase;
        QList<UMLObject *> getAllUMLObject();

    protected:
        void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
        void mousePressEvent(QGraphicsSceneMouseEvent *event);
        void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

};

#endif // MYSCENE_H

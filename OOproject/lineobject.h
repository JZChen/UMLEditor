#ifndef LINEOBJECT_H
#define LINEOBJECT_H

#include<QGraphicsLineItem>
#include <QVector>
#include "umlobject.h"


class LineObject : public QGraphicsLineItem
{

public:
    LineObject();
    LineObject(UMLObject *s,UMLObject *e);
    void setFlag(GraphicsItemFlag flag, bool enabled);


    // 0 stands for start , 1 stands for end
    UMLObject *port0;
    UMLObject *port1;
    int p0,p1;
};

#endif // LINEOBJECT_H

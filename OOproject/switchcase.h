#ifndef SWITCHCASE_H
#define SWITCHCASE_H



#include <QGraphicsScene>
#include <QDebug>
#include <QGraphicsSceneMoveEvent>
#include <QObject>
#include <QGraphicsItem>
#include <QDebug>
#include <Qpainter>

class SwitchCase
{

public:
    SwitchCase();
    SwitchCase(QGraphicsScene * scene);
    void setSelection(bool enable);
    void setMovable(bool enable);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);


protected:
    QGraphicsScene *currentScene;

};

#endif // SWITCHCASE_H

#include "umlobject.h"


UMLObject::UMLObject()
{

}

UMLObject::UMLObject(int sx , int sy)
{
    setPos(sx,sy);
}


void UMLObject::setSelection(bool enable)
{
    setFlag(ItemIsMovable ,enable);
    setFlag(ItemIsSelectable, enable);
}

int UMLObject::getPortNumber(QPoint pt)
{
    // this object's center point
    int x = this->scenePos().x()+30 , y = this->scenePos().y()+30;

    // on right side
    if( pt.x() - pt.y() >= x - y){

        if( pt.x() + pt.y() >= x + y ){
            return 1;
        }else{
            return 0;
        }
    }
    else{
    // on letf side
        if( pt.x() + pt.y() >= x + y ){
            return 2;
        }else{

            return 3;
        }

    }

}

QPoint UMLObject::getPortPos(int portNumber)
{
    switch(portNumber){
        case 0:
            return QPoint(30,0);
            break;
        case 1:
            return QPoint(60,30);
            break;
        case 2:
            return QPoint(30,60);
            break;
        case 3:
            return QPoint(0,30);
            break;
        default:
            return QPoint(30,0);
            break;

    }

}

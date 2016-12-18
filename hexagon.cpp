#include "hexagon.h"
#include <math.h>
#include <QVector>
#include <QPointF>
#include <QPolygonF>
#include <QPainter>
#include <QColor>
#include <string>
#include "type.h"

using namespace std;

Hexagon::Hexagon(int sideSize, float x, float y, int i, int j, enum Type type, QGraphicsItem * parent)
{

    QVector<QPointF> points;

    s = sideSize;

    float a = sqrt((pow(s, 2))-(pow((s/2),2)));

    this->centerX = x;
    this->centerY = y;
    this->iIndex = i;
    this->jIndex = j;

    points << QPointF(x+(s/2),y-a) << QPointF((x+s),y) << QPointF(x+(s/2),y+a)
             << QPointF(x-(s/2),y+a) << QPointF(x-s,y) << QPointF(x-(s/2),y-a);

    tile = new QGraphicsPolygonItem(QPolygonF(points),this);



    switch(type){

    case brick:
        tile->setBrush(QColor(160,39,29));
        break;

    case sheep:
        tile->setBrush(QColor(144,204,72));

        break;

    case ore:
        tile->setBrush(QColor(98,121,105));

        break;

    case wheat:
        tile->setBrush(QColor(253,196,55));

        break;

    case wood:
        tile->setBrush(QColor(0, 76, 26));

        break;

    case desert:
        tile->setBrush(QColor(206,178,79));
        break;

    default:

        break;
    }

}

float Hexagon::getX()
{
    return this->centerX;
}

float Hexagon::getY()
{
    return this->centerY;
}


#include "hexagon.h"
#include <math.h>
#include <QDebug>
#include <QVector>
#include <QPointF>
#include <QPolygonF>

Hexagon::Hexagon(QGraphicsItem *parent)
{

    QVector<QPointF> points;

    float SIDE_LENGTH = 50;
    float x = 200, y = 200;

    float a = sqrt((pow(SIDE_LENGTH, 2))-(pow((SIDE_LENGTH/2),2)));

    qDebug() << "Side Length is " << SIDE_LENGTH << " and a is " << a;

    points << QPointF(x+(SIDE_LENGTH/2),y-a) << QPointF((x+SIDE_LENGTH),y) << QPointF(x+(SIDE_LENGTH/2),y+a)
             << QPointF(x-(SIDE_LENGTH/2),y+a) << QPointF(x-SIDE_LENGTH,y) << QPointF(x-(SIDE_LENGTH/2),y-a);


    tile = new QGraphicsPolygonItem(QPolygonF(points),this);

}

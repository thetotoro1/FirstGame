#ifndef HEXAGON_H
#define HEXAGON_H

#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsItem>
#include <QColor>
#include <String>
#include "type.h"

using namespace std;

class Hexagon: public QGraphicsPolygonItem{
public:
    Hexagon(int sideSize, float x, float y, int i, int j, enum Type type, QGraphicsItem * parent=0);
    float getX();
    float getY();
private:
    float centerX, centerY;
    int s,iIndex,jIndex;
    QGraphicsPolygonItem * tile;
};



#endif // HEXAGON_H

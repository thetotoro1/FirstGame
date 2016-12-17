#ifndef HEXAGON_H
#define HEXAGON_H

#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsItem>

class Hexagon: public QGraphicsPixmapItem{
public:
    Hexagon(QGraphicsItem * parent=0);
private:
    QGraphicsPolygonItem * tile;
};



#endif // HEXAGON_H

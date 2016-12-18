#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include "type.h"

class Game: public QGraphicsView{
public:
    Game();

    QGraphicsScene * scene;
private:
    void shuffleTiles(Type types[]);
};

#endif // GAME_H

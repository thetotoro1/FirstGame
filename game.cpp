#include "game.h"
#include <QGraphicsScene>
#include "hexagon.h"



Game::Game()
{

    //create scene
    scene = new QGraphicsScene(this);

    //set scene
    setScene(scene);

    //create hexagon
    Hexagon * hex = new Hexagon();

    scene->addItem(hex);

    setFixedSize(800,600);
}

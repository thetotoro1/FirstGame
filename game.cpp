#include "game.h"
#include <QGraphicsScene>
#include "hexagon.h"
#include <QColor>
#include "type.h"
#include <math.h>
#include <QMouseEvent>




Game::Game()
{

    int gridI = 4, gridJ = 4, s=50;
    float a = sqrt((pow(s, 2))-(pow((s/2),2)));





    //create scene
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,800,600);

    //set scene
    setScene(scene);


    Hexagon * grid[gridI][gridJ];

    grid[0][0] = new Hexagon(s,100,100,0,0,brick);
    for (int j=0;j<=gridJ;j++){

        for (int i=0;i<=gridI;i++){

            if (!(i==0&&j==0) && !(i==4&&j==0) && !(i==4&&j==4) && !(i==0&&j==4) && !(i==4&&j==1) && !(i==4&&j==3)){
                grid[i][j] = new Hexagon(s,(grid[0][0]->getX() + (j*((3*s)/2))),(grid[0][0]->getY() + ((j%2)*a) + (2*i*a)),i,j,brick);
                scene->addItem(grid[i][j]);
            }
        }

    }


//    //create hexagon
//    Hexagon * hex = new Hexagon(s,100,100,0,0,brick);
//    Hexagon * hex2 = new Hexagon(s,100,200,0,0,sheep);

//    scene->addItem(hex);
//    scene->addItem(hex2);


    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);
}

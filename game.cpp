#include "game.h"
#include <QGraphicsScene>
#include "hexagon.h"
#include <QColor>
#include "type.h"
#include <math.h>
#include <QMouseEvent>
#include <QDebug>




Game::Game()
{

    int gridI = 4, gridJ = 4, s=60;
    float a = sqrt((pow(s, 2))-(pow((s/2),2)));





    //create scene
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,800,600);

    //set scene
    setScene(scene);


    Hexagon * grid[gridI][gridJ];

    Type types[] = {brick,brick,brick,ore,ore,ore,sheep,sheep,sheep,sheep,wheat,wheat,wheat,wheat,wood,wood,wood,wood,desert};

    shuffleTiles(types);


    int k = 0;

    grid[0][0] = new Hexagon(s,100,100,0,0,desert);
    for (int j=0;j<=gridJ;j++){         //loop through rows

        for (int i=0;i<=gridI;i++){     //loop through columns

            if (!(i==0&&j==0) && !(i==4&&j==0) && !(i==4&&j==4) && !(i==0&&j==4) && !(i==1&&j==4) && !(i==3&&j==4)){
                //create the hexagons
                grid[j][i] = new Hexagon(s,(grid[0][0]->getX() + (i*((3*s)/2))),(grid[0][0]->getY() + ((i%2)*a) + (2*j*a)),j,i,types[k]);
                scene->addItem(grid[j][i]);
                qDebug() << "Hexagon at (" << i << "," << j << ") was set as ";

                switch (types[k]) {
                case brick:
                qDebug() << "brick";
                    break;
                case ore:
                    qDebug() << "ore";
                    break;
                case sheep:
                    qDebug() << "sheep";
                    break;
                case wheat:
                    qDebug() << "wheat";
                break;
                case wood:
                    qDebug() << "wood";
                    break;
                case desert:
                    qDebug() << "desert";
                    break;
                default:
                    qDebug() << "ERROR!";
                    break;
                }
                k++;
            }
        }

    }




    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);
}

void Game::shuffleTiles(Type types[])
{

}


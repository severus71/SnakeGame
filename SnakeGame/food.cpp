#include "food.h"

#include <QBrush>


food::food(QGraphicsItem *parent,QString name):QGraphicsPixmapItem(parent)
{

    //The default Z-value is 0. And the snake will always be drawn on top of the food.

    if(name == "APPLE")
    {
        setPixmap(QPixmap(":/images/food.png").scaled(40,40));
        score = 1;
    }
    else
    {
        setPixmap(QPixmap(":/images/food2.png").scaled(40,40,Qt::KeepAspectRatio));
        score = 2;
    }
}

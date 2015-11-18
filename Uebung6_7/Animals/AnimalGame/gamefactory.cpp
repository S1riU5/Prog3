#include "gamefactory.h"

GameFactory::GameFactory()
{

}

GrafikObj* GameFactory::createAnimal( string type,size_t windowWidth,size_t windowHeight)
{

    if(type == "bird")
        return (GrafikObj*)new Bird(15,15,QPoint(randQPoint(windowWidth, windowHeight)),QPoint(1,1),"BIRD");
    if(type == "wolf")
        return (GrafikObj*)new Wolf(15,15,QPoint(randQPoint(windowWidth, windowHeight)),QPoint(1,1),"WOLF");
    if(type == "stone")
        return (GrafikObj*)new Stone(20,20,QPoint(randQPoint(windowWidth, windowHeight)),"STONE");
    if(type == "rabbit")
        return (GrafikObj*)new Rabbit(15,15,QPoint(randQPoint(windowWidth, windowHeight)),QPoint(1,1),"RABBIT");
    if(type == "carrot")
        return (GrafikObj*)new Carrot(20,20,QPoint(randQPoint(windowWidth, windowHeight)),"CARROT");

    return NULL;
}

int GameFactory::randInt(int min, int max)
{
    return qrand() % (( max + 1 )- min) + min;
}

QPoint GameFactory::randQPoint(size_t windowWidth,size_t windowHeight)
{
    int offset = 20;
    return QPoint(randInt(offset,windowWidth-offset),randInt(offset,windowHeight-offset));
}

/*
Bird* GameFactory::created(int width, int height, int posX, int posY, int stepX, int stepY, std::string type)
{Bir
    return new Bird(width,height,posX,posY,stepX,stepY,type);
}

Rabbit& GameFactory::createRabbit(int width, int height, int posX, int posY, int stepX, int stepY, std::string type)
{

    return *(new Rabbit(width,height,posX,posY, stepX, stepY,type));
}

Stone* GameFactory::createStone(int width, int height, QPoint position, string type)
{

}

Wolf* GameFactory::createWolf(int width, int height, int posX, int posY, int stepX, int stepY, std::string type)
{
    return new Wolf(width,height,posX,posY,stepX,stepY,type);
}

Carrot* GameFactory::createCarrot(int width, int height, QPoint position, std::string type)
{
    return new Carrot(width,height,position,type);
}
*/

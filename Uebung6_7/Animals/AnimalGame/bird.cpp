#include "bird.h"
#include "grafikobj.h"


Bird::Bird()
{

}


Bird::Bird(int width, int height, QPoint position, QPoint step,std::string type)
{
    GrafikObj::setWidth(width);
    GrafikObj::setHeight(height);
    GrafikObj::setPosition(position);
    GrafikObj::setType(type);
    GrafikObj::setStep(step);
}


Bird::Bird(int width, int height, int posX, int posY, int stepX, int stepY, std::string type):
    GrafikObj(width,height,posX,posY,stepX,stepY,type)
{

}


void Bird::beAfraid()
{
    GrafikObj::beAfraid();
}



bool Bird::checkBoarder(size_t wW, size_t wh)
{
    return GrafikObj::checkBoarder(wW,wh);
}



void Bird::setStep(int x, int y)
{
    GrafikObj::setStep(x,y);
}
void Bird::behavior(GrafikObj* object){

}

void Bird::move(size_t wW, size_t wh)
{
    GrafikObj::move(wW,wh);
}

#include "carrot.h"

Carrot::Carrot()
{

}


Carrot::Carrot(int width, int height, QPoint position, std::string type){
    GrafikObj::setWidth(width);
    GrafikObj::setHeight(height);
    GrafikObj::setPosition(position);
    GrafikObj::setType(type);
}


void Carrot::beAfraid()
{
   // std::cout<< "A Carrot has no fear"<< std::endl;

}


bool Carrot::checkBoarder(size_t wW, size_t wh)
{
    //std::cout << "A Carrot does not colide" << std::endl;
    return false;
}

void Carrot::move(size_t wW, size_t wh)
{
    //std::cout << "a Carrot does not move" << std::endl;
}

void Carrot::setStep(int x, int y)
{
    //std::cout << "a Carrot can not move" << std::endl;
}

void Carrot::behavior(GrafikObj* object)
{

}




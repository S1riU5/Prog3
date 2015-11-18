#include "grafikobj.h"
#include "stone.h"

Stone::Stone()
{

}

Stone::Stone(int width, int height, QPoint position, std::string type)
{
    GrafikObj::setWidth(width);
    GrafikObj::setHeight(height);
    GrafikObj::setPosition(position);
    GrafikObj::setType(type);
}

void Stone::behavior(GrafikObj* object)
{

}


void Stone::beAfraid(){
    //std::cout<< "A stone has no fear"<< std::endl;
}

bool Stone::checkBoarder(size_t wW, size_t wh){
    //std::cout << "A stone does not colide" << std::endl;
    return false;
}

void Stone::move(size_t wW, size_t wh){
    //std::cout << "a stone does not move" << std::endl;
}

void Stone::setStep(int x, int y){
    //std::cout << "a stone can not move" << std::endl;
}




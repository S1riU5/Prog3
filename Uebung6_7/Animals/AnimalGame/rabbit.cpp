#include "grafikobj.h"
#include "rabbit.h"

Rabbit::Rabbit()
{

}

Rabbit::Rabbit(int width, int height, int posX, int posY, int stepX, int stepY, std::string type):
    GrafikObj(width,height,posX,posY,stepX,stepY,type)
{

}

void Rabbit::behavior(GrafikObj* object)
{
    QPoint difference(object->getPosition()-this->getPosition());
    //float distance = sqrt(pow(difference.x(),2)+pow(difference.y(),2));
    //cout <<"distance: " << distance << "start" << this->getType() << endl;
    if(this->isInBetween(5,25,distance(object)))
    {

        if(object->getType() == "STONE"){
            this->setStep(this->getStep().x()*-1,this->getStep().y()*-1);
        }
        if(object->getType() == "WOLF"){
            this->setIsVisable(false);
        }
        if(object->getType() == "CARROT"){
            object->setIsVisable(false);
        }
     }
}

Rabbit::Rabbit(int width, int height, QPoint position, QPoint step, std::string type)
{
    GrafikObj::setWidth(width);
    GrafikObj::setHeight(height);
    GrafikObj::setPosition(position);
    GrafikObj::setType(type);
    GrafikObj::setStep(step);
}

void Rabbit::beAfraid(){
    GrafikObj::beAfraid();
}

void Rabbit::move(size_t wW, size_t wh){
    GrafikObj::move(wW,wh);
}

bool Rabbit::checkBoarder(size_t wW, size_t wh){
    return GrafikObj::checkBoarder(wW,wh);
}

void Rabbit::setStep(int x, int y){
    GrafikObj::setStep(x,y);
}

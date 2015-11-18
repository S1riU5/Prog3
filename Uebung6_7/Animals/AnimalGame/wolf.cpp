#include "wolf.h"

Wolf::Wolf():GrafikObj()
{

}

Wolf::Wolf(int width, int height, QPoint position, QPoint step, std::string type)
{
    GrafikObj::setWidth(width);
    GrafikObj::setHeight(height);
    GrafikObj::setPosition(position);
    GrafikObj::setType(type);
    GrafikObj::setStep(step);

}


Wolf::Wolf(int width, int height, int posX, int posy, int stepX, int stepY, std::string type )
{

}

void Wolf::behavior(GrafikObj* object)
{
    //cout << distance(object) << endl;
    if(this->isInBetween(5,25,this->distance(object))){
        if(object->getType() == "STONE"){
            this->setStep(this->getStep().x()*-1,this->getStep().y()*-1);
        }
        if(object->getType() == "RABBIT"){

            if(object->getIsVisable()){
                cout << "eat it"<<endl;
                this->setWidth(this->getWidth()+1);
                this->setHeight(this->getHeight()+1);
          //  if(this->getHeight()> 30)
            }
            object->setIsVisable(false);
        }
    }
}

void Wolf::beAfraid(){
    GrafikObj::beAfraid();
}

void Wolf::setStep(int x, int y){
    GrafikObj::setStep(x,y);
}

void Wolf::move(size_t wW, size_t wh){
    GrafikObj::move(wW,wh);
}

bool Wolf::checkBoarder(size_t wW, size_t wh){
    return GrafikObj::checkBoarder(wW,wh);
}


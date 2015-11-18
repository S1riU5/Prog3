#include "graphikobj.h"

GraphikObj::GraphikObj()
{

}

void GraphikObj::beAfraid(){
    step = -step;
}

void GraphikObj::move(){
    position += step;
}

void GraphikObj::setStep(QPoint newStep){
    this->step = newStep;
}

void GrafikObj::setStep(int x, int y){
    this->step.x  = x;
    this->step.y  = y;
}

bool GraphikObj::checkBoarder(){

}

void GraphikObj::setHeight(int height){
    this->height = height;
}

void GraphikObj::setWidth(int width){
    this->width = width;
}

int GraphikObj::getHeight(){
    return this->height;
}

int GraphikObj::getWidth(){
    return this->width;
}

virtual int getItemID(){
    return itemID;
}

virtual void setItemID(int itemID){
    this.itemID = itemID;

}

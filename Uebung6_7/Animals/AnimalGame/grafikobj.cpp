#include "grafikobj.h"

GrafikObj::GrafikObj(int width, int height, QPoint position, QPoint step, std::string type):
    width(width),
    height(height),
    position(position),
    step(step)
{

}

GrafikObj::GrafikObj(int width, int height, int posX, int posY, int stepX, int stepY, std::string type):
    width(width),
    height(height),
    position(QPoint(posX,posY)),
    step(QPoint(stepX,stepY))
{

}

GrafikObj::GrafikObj(){

}

void GrafikObj::beAfraid(){
    step = -step;
}

void GrafikObj::move(size_t wW, size_t wh){
    checkBoarder(wW, wh);
    position += step;
}

void GrafikObj::setStep(QPoint newStep){
    this->step = newStep;
}

void GrafikObj::setStep(int x, int y){
    this->step.setX(x);
    this->step.setY(y);
}

bool GrafikObj::checkBoarder(size_t wW, size_t wH){
    if(position.x() < 0 || position.x() > wW - width)
    {
        step.setX(step.x() *-1);
    }
    if(position.y() < height || position.y() > wH - height){
        step.setY(step.y()*-1);
    }
    return false;
}

void GrafikObj::setHeight(int height){
    this->height = height;
}

void GrafikObj::setWidth(int width){
    this->width = width;
}

int GrafikObj::getHeight(){
    return this->height;
}

int GrafikObj::getWidth(){
    return this->width;
}

QGraphicsEllipseItem* GrafikObj::getItemID(){
    return itemID;
}

void GrafikObj::setItemID(QGraphicsEllipseItem* itemID){
    this->itemID = itemID;
}

QPoint GrafikObj::getPosition(){
    return position;
}

void GrafikObj::setPosition(QPoint position){
    this->position = position;
}

std::string GrafikObj::getType(){
    return this->type;
}

void GrafikObj::setType(std::string type){
    this->type = type;
}

QPoint GrafikObj::getStep()
{
    return this->step;
}

void GrafikObj::setIsVisable(bool isVisable)
{
    this->isVisable = isVisable;
}

bool GrafikObj::getIsVisable()
{
    return isVisable;
}

bool GrafikObj::isInBetween(float min, float max, float value)
{
    return (value > min && value < max );
}

float GrafikObj::distance(GrafikObj *object)
{
    QPoint difference(object->getPosition() - this->getPosition());
    return sqrt(pow(difference.x(),2)+pow(difference.y(),2));
}




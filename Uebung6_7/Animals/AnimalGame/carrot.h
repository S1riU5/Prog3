#ifndef CARROT_H
#define CARROT_H

#include "gamefactory.h"
#include "grafikobj.h"



class Carrot : public GrafikObj
{
    friend class GameFactory;
public:
    /**
     * @brief Carrot::beAfraid prints out a text
     */
    void beAfraid();


    /**
     * @brief Carrot::move prints out a text
     */
    void move(size_t wW, size_t wh);

    /**
     * @brief Carrot::checkBoarder prints out a text
     */
    bool checkBoarder(size_t wW, size_t wh);

private:
    /**
     * @brief Carrot
     */
    Carrot();

    /**
     * @brief Carrot::Carrot
     * @param width
     * @param height
     * @param position
     * @param type
     */
    Carrot(int width, int height, QPoint position,std::string type);


    /**
     * @brief Carrot::setStep prints out a text
     * @param x
     * @param y
     */
    void setStep(int x, int y);

    /**
     * @brief behavior behavior define colision behavior
     * @param object
     */
    void behavior(GrafikObj* object);

};

#endif // CARROT_H

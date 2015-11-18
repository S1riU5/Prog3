#ifndef RABBIT_H
#define RABBIT_H

#include "gamefactory.h"



class Rabbit : public GrafikObj
{
    friend class GameFactory;
public:
    /**
     * @brief move set the position of the rabbit to position + step
     */
    void move(size_t wW, size_t wh);

    /**
     * @brief setStep set the step variable
     * @param x
     * @param y
     */
    void setStep(int x, int y);

    /**
     * @brief beAfraid change the stepdirection if the user clicks on the screen
     */
    void beAfraid();

    /**
     * @brief checkBoarder checks if the Rabbit is out of the screen
     * @return
     */
    bool checkBoarder(size_t wW, size_t wh);

private:
    /**
     * @brief Rabbit
     */
    Rabbit();

    /**
     * @brief Rabbit
     * @param width
     * @param height
     * @param position
     * @param step
     * @param type
     */
    Rabbit(int width, int height, QPoint position, QPoint step,std::string type);

    /**
     * @brief Rabbit
     * @param width
     * @param height
     * @param posX
     * @param posY
     * @param stepX
     * @param stepY
     * @param type
     */
    Rabbit(int width, int height, int posX, int posY, int stepX, int stepY,std::string type);

    /**
     * @brief behavior behavior define colision behavior
     * @param object
     */
    void behavior(GrafikObj* object);
};

#endif // RABBIT_H

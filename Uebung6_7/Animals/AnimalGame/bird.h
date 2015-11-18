#ifndef BIRD_H
#define BIRD_H

#include "gamefactory.h"
#include "grafikobj.h"



class Bird : public GrafikObj
{
    friend class GameFactory;
public:
    /**
     * @brief Bird::setStep set the stepwidth of the bird
     * @param x
     * @param y
     */
    void setStep(int x, int y);

    /**
     * @brief Bird::beAfraid let the Bird change direction if the user clicks into the screen
     */
    void beAfraid();


    /**
     * @brief Bird::move the bird 1 step
     */
    void move(size_t wW, size_t wh);

    /**
     * @brief Bird::checkBoarder checkss if the bird is out of the screen
     */
     bool checkBoarder(size_t wW, size_t wh);
private:
    /**
     * @brief Bird
     */
    Bird();

    /**
     * @brief Bird::Bird
     * @param width
     * @param height
     * @param position
     * @param step
     * @param type
     */
    Bird(int width, int height, QPoint position, QPoint step,std::string type);


    /**
     * @brief Bird::Bird
     * @param width
     * @param height
     * @param posX
     * @param posY
     * @param stepX
     * @param stepY
     * @param type
     */
    Bird(int width, int height, int posX, int posY, int stepX, int stepY,std::string type);

    /**
     * @brief behavior behavior define colision behavior
     * @param object
     */
    void behavior(GrafikObj* object);
};

#endif // BIRD_H

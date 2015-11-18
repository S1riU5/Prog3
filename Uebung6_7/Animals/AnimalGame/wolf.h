#ifndef WOLF_H
#define WOLF_H

#include "gamefactory.h"
#include "grafikobj.h"



class Wolf : public GrafikObj
{
    friend class GameFactory;
public:
    /**
     * @brief move adds  1 step to the position
     */
    void move(size_t wW, size_t wh);

    /**
     * @brief setStep
     * @param x
     * @param y
     */
    void setStep(int x, int y);

    /**
     * @brief beAfraid changes the step direction away from the mous curser
     */
    void beAfraid();

    /**
     * @brief checkBoarder checks if the wolf is inside the screen
     * @return
     */
    bool checkBoarder(size_t wW, size_t wh);

private:
    /**
     * @brief Wolf
     */
    Wolf();

    /**
     * @brief Wolf
     * @param width
     * @param height
     * @param position
     * @param step
     * @param type
     */
    Wolf(int width, int height, QPoint position, QPoint step,std::string type);

    /**
     * @brief Wolf
     * @param width
     * @param height
     * @param posX
     * @param posy
     * @param stepX
     * @param stepY
     * @param type
     */
    Wolf(int width, int height, int posX, int posy, int stepX, int stepY,std::string type);

    /**
     * @brief behavior define colision behavior
     * @param object
     */
    void behavior(GrafikObj* object);
};

#endif // WOLF_H

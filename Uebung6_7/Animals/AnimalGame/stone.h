#ifndef STONE_H
#define STONE_H

#include "grafikobj.h"



class Stone : public GrafikObj
{
    friend class Gamefactory;
public:
    /**
     * @brief prints out a string on the consol
     * @param x
     * @param y
     */
    void setStep(int x, int y);

    /**
     * @brief beAfraid prints out a string on the consol
     */
    void beAfraid();

    /**
     * @brief move prints out a string on the consol
     */
    void move(size_t wW, size_t wh);

    /**
     * @brief checkBoarder prints out a string on the consol
     */
    bool checkBoarder(size_t wW, size_t wh);

//private:
    /**
     * @brief Stone
     */
    Stone();

    /**
     * @brief Stone
     * @param width
     * @param height
     * @param position
     * @param type
     */
    Stone(int width, int height, QPoint position,std::string type);

    /**
     * @brief behavior behavior define colision behavior
     * @param object
     */
    void behavior(GrafikObj* object);
};

#endif // STONE_H

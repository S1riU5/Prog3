#ifndef GAMEFACTORY_H
#define GAMEFACTORY_H

#include "bird.h"
#include "carrot.h"
#include "grafikobj.h"
#include "rabbit.h"
#include "stone.h"
#include "wolf.h"





using namespace std;
class GameFactory
{
public:

    /**
     * @brief GameFactory private constructor
     */
    GameFactory();

    GrafikObj* createAnimal( string type, size_t wW, size_t wH );

    /**
     * @brief createWolf create a instance of wolf if no instance is  given. (on the heap) singleton
     * @param width
     * @param height
     * @param posX
     * @param posY
     * @param stepX
     * @param stepY
     * @param type
     * @return Wolf instance
     */
     //Wolf* createWolf(int width, int height, int posX, int posY, int stepX, int stepY, std::string type);

    /**
     * @brief createRabbit create a instance of Rabbit on the heap
     * @param width
     * @param height
     * @param posX
     * @param posY
     * @param stepX
     * @param stepY
     * @param type
     * @return Rabbit instance
     */
    // Rabbit &createRabbit(int width, int height, int posX, int posY, int stepX, int stepY, std::string type);

    /**
     * @brief createStone create a instance of Stone on the heap
     * @param width
     * @param height
     * @param position
     * @param type
     * @return Stone instance
     */
   // Stone *createStone(int width, int height, QPoint position, std::string type);

    /**
     * @brief createCarrot create a instance of Carrot on the heap
     * @param width
     * @param height
     * @param position
     * @param type
     * @return Carrot instance
     */
    //Carrot *createCarrot(int width, int height, QPoint position, std::string type);

    /**
     * @brief createBird create a instance of Bird on the heap
     * @param width
     * @param height
     * @param posX
     * @param posY
     * @param stepX
     * @param stepY
     * @param type
     * @return a instance of Bird
     */
   // Bird* createBird(int width, int height, int posX, int posY, int stepX, int stepY, std::string type);

private:

    int randInt(int min, int max);
    QPoint randQPoint(size_t windowWidth,size_t windowHeight);

};

#endif // GAMEFACTORY_H

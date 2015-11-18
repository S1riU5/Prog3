#ifndef GRAPHIKOBJ_H
#define GRAPHIKOBJ_H

#include <QGraphicsEllipseItem>
#include <QMainWindow>
#include <QPixmap>
#include <QPoint>
#include<iostream>



class GrafikObj
{


public:

    /**
     * @brief GraphikObj
     * default constructor
     */
    GrafikObj();

    /**
     * @brief GrafikObj
     * @param width
     * @param height
     * @param position
     * @param step
     */
    GrafikObj(int width, int height, QPoint position, QPoint step, std::string type);

    /**
     * @brief GrafikObj
     * @param width
     * @param height
     * @param posX
     * @param posy
     * @param stepX
     * @param stepY
     */
    GrafikObj(int width, int height, int posX, int posy, int stepX, int stepY, std::string type);


    /**
     * @brief move adds the value of step to the current position
     */
    virtual void move(size_t wW, size_t wh);

    /**
     * @brief setStep: set the value of step by using a Qpoint object
     */
    virtual void setStep(QPoint);

    /**
     * @brief setStep set the valu of step by using integer
     * @param x stepwidth x
     * @param y stepwidth y
     */
    virtual void setStep(int x, int y) = 0;

    /**
     * @brief beAfraid change the step direction of the GrafikObject
     */
    virtual void beAfraid() = 0;

    /**
     * @brief checkBoarder checks if the GraphikObj is inside the window
     * @return false if no boarder is  reached and true if a boarder is reached
     */
    virtual bool checkBoarder(size_t wW, size_t wh) = 0;

    /**
     * @brief setHeight
     * @param height
     */
    virtual void setHeight(int height);

    /**
     * @brief setWidth
     * @param width
     */
    virtual void setWidth(int width);

    /**
     * @brief getHeight
     * @return
     */
    virtual int getHeight();

    /**
     * @brief getWidth
     * @return
     */
    virtual int getWidth();

    /**
     * @brief getItemID
     * @return
     */
    virtual QGraphicsEllipseItem* getItemID();


    /**
     * @brief setItemID
     */
    virtual void setItemID(QGraphicsEllipseItem* itemID);

    /**
     * @brief getPosition
     * @return
     */
    virtual QPoint getPosition();

    /**
     * @brief setPosition
     */
    virtual void setPosition(QPoint);

    /**
     * @brief getType
     * @return
     */
    virtual std::string getType ();
    /**
     * @brief setType
     * @param type
     */
    virtual void setType(std::string type);

    virtual QPoint getStep();

    /**
     * @brief setIsVisable
     * @param isVisable
     */
    void setIsVisable(bool isVisable);

    /**
     * @brief getIsVisable
     * @return
     */
    bool getIsVisable();
    /**
     * @brief behavior defines colision behavior
     * @param object
     */
    virtual void behavior(GrafikObj* object) = 0;

     bool isInBetween(float min, float max, float value);

     float distance (GrafikObj* obj);

private:
    QGraphicsEllipseItem* itemID;
    bool isVisable;
    QPoint position;
    QPoint step;
    int height;
    int width;
    QPixmap map;
    std::string type;




};

#endif // GRAPHIKOBJ_H

#ifndef GRAPHIKOBJ_H
#define GRAPHIKOBJ_H

#include <QPoint>



class GraphikObj
{
public:
    /**
     * @brief GraphikObj
     * default constructor
     */
    GraphikObj();

    /**
     * @brief move adds the value of step to the current position
     */
    virtual void move();

    /**
     * @brief setStep: set the value of step by using a Qpoint object
     */
    virtual void setStep(QPoint);

    /**
     * @brief setStep set the valu of step by using integer
     * @param x stepwidth x
     * @param y stepwidth y
     */
    virtual void setStep(int x, int y);

    /**
     * @brief beAfraid change the step direction of the GrafikObject
     */
    virtual void beAfraid();

    /**
     * @brief checkBoarder checks if the GraphikObj is inside the window
     * @return false if no boarder is  reached and true if a boarder is reached
     */
    virtual bool checkBoarder();

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
    virtual int getItemID();


    /**
     * @brief setItemID
     */
    virtual void setItemID(int itemID);



private:
    int itemID;
    bool isVisable;
    QPoint position;
    QPoint step;
    int height;
    int width;


};

#endif // GRAPHIKOBJ_H

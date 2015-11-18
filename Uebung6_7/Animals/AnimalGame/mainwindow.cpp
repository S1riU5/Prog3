#include "gamefactory.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wolf.h"

#include <QShowEvent>

class GameFactory;

MainWindow::MainWindow(QWidget *parent) :
QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

    for (size_t i = 0; i < obj.size(); ++i) {
        delete obj.at(i);
    }
}

void MainWindow::positionGameObjects()
{


    for(size_t i = 0; i< obj.size(); i++ )
    {

        if(obj.at(i)->getIsVisable()){
            //cout << "type: "  << obj.at(i)->getType() << endl;
            if(obj.at(i)->getType() == "STONE")
            {
                //cout << "add Stone" << endl;
                addItemToScene(obj.at(i),Qt::gray,Qt::gray);
            }
            if(obj.at(i)->getType() == "BIRD")
            {
                //cout << "add Bird" << endl;
                addItemToScene(obj.at(i),Qt::blue,Qt::blue);
            }
            if(obj.at(i)->getType() == "WOLF")
            {
               // cout << "add Wolf" << endl;
                addItemToScene(obj.at(i),Qt::red,Qt::red);
            }
            if(obj.at(i)->getType() == "CARROT")
            {
                //cout << "add Carrot" << endl;
                addItemToScene(obj.at(i),Qt::yellow,Qt::yellow);
            }
            if(obj.at(i)->getType() == "RABBIT")
            {
                //cout << "add Rabbit" << endl;
                addItemToScene(obj.at(i),Qt::darkGreen,Qt::green);
            }
        }
    }
}

void MainWindow::addItemToScene(GrafikObj* gameItem, QColor border, QColor fill)
{
    scene->addEllipse(gameItem->getPosition().rx(), gameItem->getPosition().ry(),
                      gameItem->getWidth(),gameItem->getHeight(),
                      QPen(border),QBrush(fill));
}

void MainWindow::showEvent(QShowEvent* event ){
   GameFactory fac;
   scene = new QGraphicsScene;
   QRect rect(0,0,500,500);
   scene->setSceneRect(rect);
   ui->graphicsView->setScene(scene);
   scene->addRect(0,0,500,500,QPen(Qt::blue));
   ui->graphicsView->fitInView(scene->sceneRect());
   initPlayground(fac);
   positionGameObjects();
   cout << obj.size() << endl;




    /*w1->setHeight(25);
    w1->setWidth(25);
    w1->setStep(1,1);
    w1->setPosition(QPoint(20,20));
    scene->addEllipse(w1->getPosition().rx(),
                      w1->getPosition().ry(),
                      w1->getHeight(),
                      w1->getWidth(),
                      QPen(Qt::red),
                      QBrush(Qt::gray));*/
}

void MainWindow::timerEvent(QTimerEvent *event){
    scene->clear();
    for (int i = 0; i < obj.size(); ++i)
    {
        obj.at(i)->move(windowWidth,windwoHeight);
        for(int j = 0; j < obj.size(); j++)
        {
           obj.at(i)->behavior(obj.at(j));
        }
    }
    positionGameObjects();
}


void MainWindow::on_pushButton_clicked()
{
    timerID0 = startTimer(30);
}




void MainWindow::on_pushButton_2_clicked()
{
    killTimer(timerID0);
    scene->clear();
    GameFactory fac;
    initPlayground(fac);
    positionGameObjects();


}


void MainWindow::initStones(size_t number, GameFactory fac)
{
    for(int i = 0; i< number; i++)
    {
        obj.push_back(fac.createAnimal("stone", windowWidth, windwoHeight));
       // obj.push_back(fac.createStone(20,20,QPoint(qrand() % ((windowWidth)),qrand() % ((windwoHeight))),"STONE"));
    }
}

void MainWindow::initBirds(size_t number, GameFactory fac)
{
    for(size_t i = 0; i < number; i ++ )
    {
        obj.push_back(fac.createAnimal("bird", windowWidth, windwoHeight));
       // obj.push_back(fac.createBird(15,15,qrand()%(windowWidth),qrand()%(windwoHeight),1,1,"BIRD"));
    }

}


void MainWindow::initCarrots(size_t number, GameFactory fac)
{
    for(int i = 0; i< number; i++){
        obj.push_back(fac.createAnimal("carrot", windowWidth, windwoHeight));
      //  obj.push_back(fac.createCarrot(10,10,QPoint(qrand() % ((windowWidth)),                                                            qrand() % ((windwoHeight))),"CARROT"));
    }

}

void MainWindow::mousePressEvent(QMouseEvent* ev)
{
    const QPoint p = ev->pos();
    for(size_t i = 0; i< obj.size(); i++){
        QPoint tmp;
        tmp.setX(obj.at(i)->getPosition().x() - p.x());
        tmp.setY(obj.at(i)->getPosition().y() - p.y());

        if(tmp.x() > 0){
            tmp.setX(1);
        }
        if(tmp.x()< 0){
            tmp.setX(-1);
        }
        if(tmp.y() < 0){
            tmp.setY(-1);
        }
        if(tmp.y() > 0){
            tmp.setY(1);
        }
        cout <<"x: "<< tmp.x() << " y: " <<tmp.y()<<endl;
        obj.at(i)->setStep(tmp);
    }
    cout <<"x: " <<p.x() << "y: "<< p.y() << endl;
}

void MainWindow::initWolf(GameFactory fac)
{
    obj.push_back(fac.createAnimal("wolf", windowWidth, windwoHeight));
   // obj.push_back(fac.createWolf(30,30,(qrand() % windowWidth) , (qrand() % windwoHeight),1,1,"WOLF"));
}

void MainWindow::initRabbits(size_t number, GameFactory fac)
{
    for(size_t i = 0; i<number; i++)
    {
        obj.push_back(fac.createAnimal("rabbit", windowWidth, windwoHeight));
       // obj.push_back(fac.createRabbit(10,10,(qrand() % windowWidth), (qrand() % windwoHeight),1,2,"RABBIT" ));
    }

}


void MainWindow::initPlayground(GameFactory fac){

    for (int i = obj.size()-1; i >= 0; --i) {
        delete obj.at(i);
        obj.pop_back();

    }

    initBirds(2,fac);
    initCarrots(7,fac);
    initRabbits(20,fac);
    initStones(7,fac);
    initWolf(fac);

}


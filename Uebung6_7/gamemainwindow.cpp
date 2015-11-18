#include "gamemainwindow.h"
#include "ui_gamemainwindow.h"

GameMainWindow::GameMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameMainWindow)
{
    ui->setupUi(this);
}

GameMainWindow::~GameMainWindow()
{
    delete ui;
}


void GameMainWindow::showEvent(QShowEvent *event){
    Wolf test;
    scene = new QGraphicsScene;
    test.setItemID(scene->addEllipse(5,5,,test.getWidth(),test.getWidth(),QPen(Qt::black),QBrush(Qt::yellow)));
}

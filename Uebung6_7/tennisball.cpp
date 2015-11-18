/* author: Marcus Lockenvitz */
#include "tennisball.h"
#include "ui_tennisball.h"
Tennisball::Tennisball(QWidget *parent) :QMainWindow(parent),ui(new Ui::Tennisball){
    ui->setupUi(this);
}
Tennisball::~Tennisball(){
    delete ui;
    if (lever) {
        killTimer(timerId0);
    }
}
void Tennisball::showEvent(QShowEvent* event){
    scene = new QGraphicsScene;
    QRect rect(0,0,500,500);
    scene->setSceneRect(rect);
    ui->graphicsView->setScene(scene);
    scene->addRect(0,0,500,500,QPen(Qt::blue));
    ui->graphicsView->fitInView(scene->sceneRect());
}
void Tennisball::timerEvent(QTimerEvent *event){
    checkPosition();
}
void Tennisball::checkPosition(){
    if ((coord.x() < 0 + 1 && step.x() < 0) || (coord.x() > border - ellipse && step.x() > 0)) {
        step.setX(step.x() * -1);
    } else if ((coord.y() < 0 + 1 && step.y() < 0) || (coord.y() > border - ellipse && step.y() > 0)){
        step.setY(step.y() * -1);
    }
    moveBall();
}
void Tennisball::moveBall(){
    coord += step;
    itemId->setPos(coord);
}
float Tennisball::getRandom(int low, int height){
    return low + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(height-low)));
}
void Tennisball::on_pushButton_clicked()
{
    if (lever) {
        coord = QPointF(getRandom(26,474),getRandom(0,50));
        step = QPointF(getRandom(-5,5),getRandom(-5,5));
        qDebug() << " -- Start --";
        qDebug() << "coord: " << coord;
        qDebug() << "step: " << step;
        itemId = scene->addEllipse(0,0,ellipse,ellipse,QPen(Qt::black),QBrush(Qt::yellow));
        itemId->mapToScene(0,0,500,500);
        itemId->setPos(coord);
        timerId0 = startTimer(30);
        lever=false;
    } else {
        killTimer(timerId0);
        scene->removeItem(itemId);
        lever=true;
    }
}

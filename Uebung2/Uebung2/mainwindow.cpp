#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    x = 0;
    y = 0;
    coord = QPoint(400, 100);
    step = QPoint(-4,3);
    tCoord = QPoint(50,150);
    tStep = QPoint(-1,-1);
    radius = 30;
}



/**
 * @brief drawTenisBall
 * Add a Tenisball to the scene and add a step to it.
 */

void MainWindow::drawTenisBall(){
    // draw Ball
    scene->clear();
    scene->addEllipse(tCoord.x(),tCoord.y(),radius,radius,QPen(Qt::blue));

    //move
   checkCoords();
}

/**
 * @brief MainWindow::showEvent
 * @param event
 * adds event timer to the scene
 * http://doc.qt.io/qt-4.8/qgraphicsscene.html
 */
void MainWindow::showEvent(QShowEvent* event){
    scene = new QGraphicsScene;

    QRect rect(0,0,500,500);
    scene->setSceneRect(rect);
    ui->graphicsView->setScene(scene);
    scene->addRect(0,0,500,500,QPen(Qt::blue));
    ui->graphicsView->fitInView(scene->sceneRect());
    qDebug() << "show window...";
    //Circle
    timerId0 = startTimer(1000);
    //Rectangle
    timerId1 = startTimer(450);
    // bouncing ball
    timerId2 = startTimer(25);

}
/**
 * checks if the tenisball is out of the frame
 * @brief MainWindow::checkCoords
 */
void MainWindow::checkCoords(){
    int width = scene->width();
    int height = scene->height();

    if(!(tCoord.x() > 0 && tCoord.x() < width - radius)){
            tStep.setX(tStep.x() * -1 );
    }

    if(!(tCoord.y() > 0 && tCoord.y() < height - radius)){
            tStep.setY(tStep.y() * -1 );
    }

    tCoord += tStep;

}


/**
 * draw a tenisball
 * @brief MainWindow::timerEvent
 * @param event
 */
void MainWindow::timerEvent(QTimerEvent *event)
{
    static int cnt = 0;
    if(event->timerId() == timerId0){
        //scene->addEllipse(coord.x(),coord.y(),25,25,QPen(Qt::blue));
        //coord += step;
    }
    if(event->timerId() == timerId1){
        //scene->addRect(x,y,25,25,QPen(Qt::red));
        //x+=5; y+=5;
        //cnt++;
        //qDebug() << cnt << " coord: " << coord;
        //QString s1;
        //s1.setNum(event->timerId());
        //scene->addSimpleText(s1);
    }
    if(event->timerId() == timerId2){
        drawTenisBall();

    }
}

/**
 * @brief MainWindow::~MainWindow
 * set the memory free
 */
MainWindow::~MainWindow()
{
    killTimer(timerId0);
    killTimer(timerId1);
    killTimer(timerId2);
    delete ui;
}

/**
 * @brief MainWindow::on_pushButton_clicked
 */
void MainWindow::on_pushButton_clicked()
{
    scene->clear();
    x = 0;
    y = 0;
}

/**
 *  Reset the tenisball
 * @brief MainWindow::on_pushButton_2_clicked
 */
void MainWindow::on_pushButton_2_clicked()
{
    scene->clear();
    tCoord = QPoint(50,150);
    //Tenissball
    //timerId2 = startTimer(50);
}

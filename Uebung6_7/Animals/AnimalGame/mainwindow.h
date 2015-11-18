#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "gamefactory.h"
#include "wolf.h"
#include<vector>
#include <QGraphicsScene>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    Wolf* w1;
    std::vector<GrafikObj*> obj;
    size_t windwoHeight = 500;
    size_t windowWidth = 500;
    void positionGameObjects();
    int timerID0;
protected:
    void addItemToScene(GrafikObj* gameItem,QColor border, QColor fill);
    void showEvent(QShowEvent *event);
    void timerEvent(QTimerEvent *event);
    void initPlayground(GameFactory fac);
    void initRabbits(size_t number,GameFactory fac);
    void initStones(size_t number, GameFactory fac);
    void initBirds(size_t number, GameFactory fac);
    void initWolf(GameFactory fac);
    void initCarrots(size_t number, GameFactory fac);


private slots:
    void mousePressEvent(QMouseEvent* ev);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // MAINWINDOW_H

#ifndef GAMEMAINWINDOW_H
#define GAMEMAINWINDOW_H

#include "wolf.h"

#include <QGraphicsEllipseItem>
#include <QMainWindow>

namespace Ui {
class GameMainWindow;
}

class GameMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameMainWindow(QWidget *parent = 0);
    ~GameMainWindow();

private:
    QGraphicsScene *scene;
    Ui::GameMainWindow *ui;
    Wolf wolf;
    QGraphicsEllipseItem* itemId0;
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent* event);
};

#endif // GAMEMAINWINDOW_H

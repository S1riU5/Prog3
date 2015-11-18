#ifndef GAME_H
#define GAME_H

#include <QDeclarativeItem>
#include <QGraphicsScene>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class GameData;

class Game : public QWidget
{
    Q_OBJECT
public:
    explicit Game(QWidget *parent = 0);
    Game(const Game &);
    Game &operator=(const Game &);
    ~Game();


signals:

public slots:

private:


    QGraphicsScene *scene;
    QGraphicsEllipseItem* itemId0;
    QGraphicsEllipseItem* itemId;
    QGraphicsRectItem* rectId0;
    QGraphicsItem* test;
    QPointF coord, step;
    int timerId0;
    int border = 500;
    int ellipse = 26;
    bool lever = true;
    QSharedDataPointer<GameData> data;
};

#endif // GAME_H

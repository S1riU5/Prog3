#include "game.h"

class GameData : public QSharedData
{
public:

};

Game::Game(QWidget *parent) : QWidget(parent), data(new GameData)
{

}

Game::Game(const Game &rhs) : data(rhs.data)
{

}

Game &Game::operator=(const Game &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

Game::~Game()
{

}


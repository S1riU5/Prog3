#ifndef TENNISBALL_H
#define TENNISBALL_H
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <cstdlib>
#include <QDebug>
namespace Ui {
    class Tennisball;
}
class Tennisball : public QMainWindow
{
    Q_OBJECT
    public:
        explicit Tennisball(QWidget *parent = 0);
        ~Tennisball();
    private:
        Ui::Tennisball *ui;
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
    protected:
        void timerEvent(QTimerEvent *event);
        void showEvent(QShowEvent* event);
        void checkPosition();
        void moveBall();
        float getRandom(int, int);
    private slots:
        void on_pushButton_clicked();
};
#endif // TENNISBALL_H

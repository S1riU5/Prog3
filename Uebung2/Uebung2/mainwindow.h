#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QGraphicsScene>
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    void checkCoords();
    void drawTenisBall();
    void checkCoord();
    Ui::MainWindow *ui;
    QGraphicsScene* scene;
    int timerId0, timerId1, timerId2;
    QPoint coord, tCoord, step, tStep;
    int x, y;
    int radius;
protected:
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent* event);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};
#endif // MAINWINDOW_H

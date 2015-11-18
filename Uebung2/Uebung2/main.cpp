#include "mainwindow.h"
#include <QApplication>


/**
 * Run the main and start the aplication.
 * @brief main
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

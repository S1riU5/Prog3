/********************************************************************************
** Form generated from reading UI file 'tennisball.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TENNISBALL_H
#define UI_TENNISBALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tennisball
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Tennisball)
    {
        if (Tennisball->objectName().isEmpty())
            Tennisball->setObjectName(QStringLiteral("Tennisball"));
        Tennisball->resize(530, 632);
        centralWidget = new QWidget(Tennisball);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 501, 51));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 70, 500, 500));
        Tennisball->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Tennisball);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 530, 27));
        Tennisball->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Tennisball);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Tennisball->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Tennisball);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Tennisball->setStatusBar(statusBar);

        retranslateUi(Tennisball);

        QMetaObject::connectSlotsByName(Tennisball);
    } // setupUi

    void retranslateUi(QMainWindow *Tennisball)
    {
        Tennisball->setWindowTitle(QApplication::translate("Tennisball", "Tennisball", 0));
        pushButton->setText(QApplication::translate("Tennisball", "start / stopp button", 0));
    } // retranslateUi

};

namespace Ui {
    class Tennisball: public Ui_Tennisball {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TENNISBALL_H

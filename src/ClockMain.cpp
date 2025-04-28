#include<iostream>
#include"../header/ClockWidget.h"
#include <QApplication>


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    ClockWidget clockWidget;
    clockWidget.firstFunction();
    return app.exec();
}
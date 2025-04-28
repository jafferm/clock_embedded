#include"../header/ClockWidget.h"
#include<iostream>


void ClockWidget::firstFunction() {
    //using Qlabel obj to display time
    label.setAlignment(Qt::AlignCenter);
    label.resize(200, 200);

    QObject::connect(&timer, &QTimer::timeout, [this](){
        QTime currentTime = QTime::currentTime();
        QString timeText = currentTime.toString("hh:mm:ss");
        label.setText(timeText);
        label.setStyleSheet("background-image: url(:/img_src/clock_back.jpeg);");
    });

    timer.start(1000);

    label.show();

}


#include<QLabel>
#include<QTimer>
#include<QTime>

class ClockWidget
{
    public:
    void firstFunction();

    private:
    QLabel label;
    QTimer timer;
    int time=12;
};

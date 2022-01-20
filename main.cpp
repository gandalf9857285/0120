#include <QCoreApplication>
#include"unit.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
unit u1, u2;
u1.attack(u2);

    return a.exec();
}

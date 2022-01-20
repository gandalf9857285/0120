#include <QCoreApplication>
#include"unit.h"
#include"pudge.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
unit u1;
pudge u2;
u1.attack(u2);
u2.MeataHoock(u1);

    return a.exec();
}

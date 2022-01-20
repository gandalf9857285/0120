#include <QCoreApplication>
#include"unit.h"
#include"pudge.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
unit u1;
pudge u2;


for (int  i=0; i< 10; i++) {

u1.attack(u2);
u2.MeataHoock(u1);
if (u1.health <= 0|| u2.health <= 0){
    cout << "Finish" << endl;
break;}
if (u1.health>0){
    cout << "win" << u1.name << endl;
}
else{
    cout << "win" << u2.name <<endl;
break;}

    return a.exec();
}

}

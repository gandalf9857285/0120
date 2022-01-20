#include <QCoreApplication>
#include"student.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
Student s1;
s1.print();
Student s2("Vasilisa", 39, 34);
s2.print();
    return a.exec();
}

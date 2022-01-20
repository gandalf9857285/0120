#include <QCoreApplication>
#include"student.h"
#include"teacher.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
Student s1;
s1.print();
Teacher s3;
s3.print();


    return a.exec();
}

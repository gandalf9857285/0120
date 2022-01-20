#ifndef UNIT_H
#define UNIT_H
#include <iostream>
#include <string.h>
using namespace std;
class unit
{
public:
    int health;
    int armor;
    int damage;
    char name[20];
public:
    unit();
    void attack(unit &enemy);
};

#endif // UNIT_H

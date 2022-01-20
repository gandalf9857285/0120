#include "unit.h"

unit::unit()
{
this->health=100;
    this->armor=10;
    this->damage=20;
    strcpy(this->name, "unit1");
}
void unit::attack(unit &enemy){
    enemy.health-=this->damage;
    cout << this->name<< "atauket" << enemy.name
                                  <<"i nanosit" << this->damage << "urona"
                                 << endl;
}

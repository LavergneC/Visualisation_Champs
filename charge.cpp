#include "charge.h"

Charge::Charge(int x, int y, double q):positionX(x),positionY(y),charge(q){}

int Charge::getPositionX() const
{
    return positionX;
}

int Charge::getPositionY() const
{
    return positionY;
}

double Charge::getCharge() const
{
    return charge;
}

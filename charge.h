#ifndef CHARGE_H
#define CHARGE_H


class Charge
{
private:
    int positionX;
    int positionY;
    double charge;
public:
    Charge(int x, int y, double q);
    int getPositionX() const;
    int getPositionY() const;
    double getCharge() const;
};

#endif // CHARGE_H

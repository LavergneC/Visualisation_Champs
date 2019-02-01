#ifndef VECTEUR_H
#define VECTEUR_H

#include "charge.h"
#include <QString>

class Vecteur
{
private:
    double m_x;
    double m_y;
public:
    Vecteur(double x, double y);
    Vecteur(Charge charge, int posX,int posY);
    Vecteur operator+(Vecteur v);
    void setFromCharge(Charge charge);
    Vecteur* operator*(double d)const;
    QString toString();
};

#endif // VECTEUR_H

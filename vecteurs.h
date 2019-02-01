#ifndef VECTEURS_H
#define VECTEURS_H
#include <QList>
#include "vecteur.h"

class Vecteurs:public QList<Vecteur*>
{
public:
    Vecteur getSomme();
};

#endif // VECTEURS_H

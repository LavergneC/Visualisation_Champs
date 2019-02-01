#include "vecteurs.h"

Vecteur Vecteurs::getSomme()
{
    Vecteur r(0,0);

    for(Vecteur* v:*this)
        r=r+(*v);

    return r;
}

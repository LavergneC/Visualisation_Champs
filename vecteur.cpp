#include "vecteur.h"
#include <tgmath.h>
#include <math.h>
#include <QTextStream>

Vecteur::Vecteur(double x, double y){
    m_x=x;
    m_y=y;
}

Vecteur Vecteur::operator+(Vecteur v){
    return * new Vecteur(this->m_x + v.m_x, this->m_y+v.m_y);
}

/*
* Permet de Créer un Vecteur à partir d'une charge et
* de la position du vecteur.
* Peut-être il faudait enlever toutes les constantes.
*/
Vecteur::Vecteur(Charge charge, int posX, int posY){
    double e0 = 8.85418782 * std::pow(10,-12);
    const double pi = 3.1415926535897;

    double a = posX - charge.getPositionX();
    double b = posY - charge.getPositionY();
    //double c = sqrt(std::pow(a,2) + std::pow(b,2));
    double alpha = atan(b/a);

    double distanceCaree = std::pow(a,2) + std::pow(b,2);

    //Vecteur* QM = new Vecteur(a,b);
    //Vecteur *vecteur_unitaire = new Vecteur(cos(alpha),sin(alpha));

    double norme = charge.getCharge() / (4 * pi * e0 * distanceCaree);

    this->m_x = norme * cos(alpha);
    this->m_y = norme * sin(alpha);
}

Vecteur* Vecteur::operator*(double d)const{
    Vecteur* r = new Vecteur(this->m_x * d, this->m_y * d);
    return r;
}

QString Vecteur::toString(){
    QString txt;
    QTextStream buf(&txt);
    buf<<"{"<<m_x<<", "<<m_y<<"}";
    return txt;
}

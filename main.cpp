#include <QCoreApplication>
#include <iostream>
#include "vecteur.h"
#include "vecteurs.h"

#include <QApplication>

/*
*  La création d'une classe plan qui inclurais l'ajout des charges
*  et le calcule des vecteur est à envisager.
*  (classe plan du prof)
*/

int main(int argc, char *argv[]){

    QApplication a(argc, argv);

    /* Création des charges du plan */
    QList<Charge*> charges;
    Charge* c = new Charge(0,0,1);
    Charge* c2 = new Charge(0,10,-1);
    charges.append(c);
    charges.append(c2);

    /*
    * Démonstration du calcul du vecteur à un point donné
    * (ici (10,5)). 
    * Rontine à effectuée pour chaque point du plan.
    */
    Vecteurs vs;
    int x=10,y=5;
    for(Charge* charge:charges){
        vs.append(new Vecteur(*charge,x,y));
    }
    std::cout<<vs.getSomme().toString().toStdString()<<std::endl;

/*
*  
*   Tests divers pour la création d'un vecteur avec une charge :
*
    Vecteur* v = new Vecteur(*c,0,1);
    std::cout<<v->toString().toStdString()<<std::endl;
    Vecteur* v2 = new Vecteur(*c2,0,1);
    std::cout<<v2->toString().toStdString()<<std::endl;
    Vecteur* v3 = new Vecteur(*c,0,1000);
    std::cout<<v3->toString().toStdString()<<std::endl;
*/
     return a.exec();
}

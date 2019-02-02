#ifndef CHARGE_H
#define CHARGE_H


class Charge
{
private:
	/*	Peut-être il faudrait utiliser le type prévu pour les coordonnées.
	*	Remarque valable pour tout le projet.
	*/
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

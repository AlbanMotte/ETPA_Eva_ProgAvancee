#ifndef DICE_H
#define DICE_H

#include <string>

class Dice {

    protected:
    int _nbrDeFace;
    int _valeur;

    public:
    Dice();
    Dice(int _nbDeFace, int valeur);
    void lancer();
    int getValeur();

};

#endif
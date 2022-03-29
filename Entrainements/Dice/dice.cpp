#ifndef DICE_CPP
#define DICE_CPP

#include "dice.h"
#include <iostream>
#include <random>
#include <string>
#include <time.h>
#include <stdlib.h>

Dice::Dice() : _nbrDeFace(6), _valeur(0) {}
Dice::Dice(int face, int nombre) : _nbrDeFace(face), _valeur(nombre) {}

void Dice::lancer(){
    _valeur = 0;
    const int MAX = 6, MIN = 1;
    srand(time(NULL));
    _valeur = (rand() % (MAX - MIN + 1)) + MIN;
}

int Dice::getValeur(){
    return _valeur;
}

#endif
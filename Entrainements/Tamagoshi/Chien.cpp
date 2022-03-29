#include "Chien.h"
#include "Animal.h"
#include <iostream>

Chien::Chien() : Animal() {
    _nom = "Falco";
    _espece = "Chien";
    _nourriture = "Croquette";
}
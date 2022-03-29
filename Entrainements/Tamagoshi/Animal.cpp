#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include "Animal.h"

    Animal::Animal(): _nom ("Aucun"), _espece("Inexistant"), _nourriture("Rien") {}
    Animal::Animal(std::string name, std::string specie) :
        _nom(name), _espece(specie) {}

    std::string Animal::getNom() {
        return _nom;
    }
    std::string Animal::getEspece(){
        return _espece;
    }
    
    void Animal::changeNom(std::string nouveauNom){
        _nom = nouveauNom;
    }

#endif
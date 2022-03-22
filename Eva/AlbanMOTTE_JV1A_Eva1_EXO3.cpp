#include <iostream>
#include <string>

#include "Lieu(EXO3).h"

Lieu::Lieu() : _nom("Ville"), _description("Une ville typique médiévale, sans grand danger"), _valeur("1") {}

std::string Lieu::getDescription(){
    return _description;
}

std::string Lieu::getName(){
    return _nom;
}

std::string Lieu::getDifficulty(){
    return _valeur;
}

int Lieu::getListeLieu(){
    return _tableau;
}
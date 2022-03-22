#include <iostream>
#include <string>

#include "Lieu(EXO3).h"

Lieu::Lieu(): _nom ("Aucun"), _description("Inexistant"), _valeur(0) {}

std::string Lieu::getDescription(){
    return _description;
}

std::string Lieu::getName(){
    return _nom;
}

std::string Lieu::getDifficulty(){
    return _valeur;
}

Ville::Ville() : Lieu() {
    _nom = "la Ville";
    _description = "Une typique ville médiévale, sans grand danger";
    _valeur = 1;
}

Foret::Foret() : Lieu() {
    _nom = "la Forêt";
    _description = "Une forêt bien sombre, quelques dangers sont tapis dans l'ombre";
    _valeur = 9;
}

Grotte::Grotte() : Lieu() {
    _nom = "la Grotte";
    _description = "Une grotte lugubre et sinistre, beaucoup de danger rôdent";
    _valeur = 19;
}
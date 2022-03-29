#include "Animal.cpp"
#include "Chat.cpp"
#include "Chien.cpp"
#include <iostream>
#include <string>

int main(){
    Animal * monAnimal;

    int choix;
    std::cout << "Choisissez votre animal à élever, 1 = Chien et 2 = Chien" <<std::endl;
    std::cin >> choix;
    if (choix == 1)
        monAnimal = new Chien();
    else 
        monAnimal = new Chat();

    std::cout << monAnimal ->getNom() << " est le nom de cet animal et il appartient à la race du " << monAnimal -> getEspece() <<std::endl;
};
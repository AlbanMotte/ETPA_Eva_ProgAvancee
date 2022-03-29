#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal{

    protected:
        std::string _nom;
        std::string _espece;
        std::string _nourriture;

    public:
        Animal();
        Animal(std::string name, std::string specie);
        std::string getNom();
        std::string getEspece();
        std::string getBouffe();
        
        void changeNom (std::string nouveauNom);
    
};

#endif
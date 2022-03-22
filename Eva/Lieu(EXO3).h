#ifndef LIEU_H
#define LIEU_H

#include <string>
#include <iostream>
#include <vector>

class Lieu{

    protected:
        std::string _nom;
        std::string _description;
        std::string _valeur;
        std::vector<int> _tableau;

    public:
    Lieu();
    Lieu(std::string nom, std::string description, std::string );

    std::string getDescription();
    std::string getName();
    std::string getDifficulty();
    ListeLieu();

};



#endif
#include "dice.cpp"

#include <iostream>
#include <string>
#include <random>

int main (){
    
    Dice * lancerDeDe = new Dice (6,1);

    std::cout <<"Un dé va être lancé !" <<std::endl;
    lancerDeDe -> lancer();
    std::cout <<"Vous avez obtenu : " << lancerDeDe -> getValeur() <<std::endl;
    
    return 0;

}
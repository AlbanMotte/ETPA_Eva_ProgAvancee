#include "Grille.cpp"
#include "Tictactoe.cpp"
#include <iostream>
#include <string>


int main(){

    bool partiegagnee = false;
    Tictactoe * jeu = new Tictactoe();
     
    int numeroCase;



    while(!partiegagnee && !(jeu->testeJeuNul())){
        
        jeu->afficheGrille();
        std::cout <<"Vous pouvez Jouer !"<<std::endl;
        std::cin >> numeroCase;
        jeu->ajouteSymbole(numeroCase,0);
        partiegagnee = jeu->testeVictoireDiagonale() || jeu->testeVictoireHorizontale() || jeu->testeVictoireVerticale();
        jeu->finTour();
    }
    jeu->afficheGrille();
    return 0;
}
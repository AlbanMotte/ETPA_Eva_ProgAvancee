#ifndef GRILLE_CPP
#define GRILLE_CPP

#include "Grille.h"
#include <iostream>

    Grille::Grille() : _nombreColonnes(3), _nombreLignes(3) {
        _tableau=std::vector<char>(9,' ');
    }
    
    Grille::Grille(int nbColonnes, int nbLignes) : _nombreLignes(nbLignes), _nombreColonnes(nbColonnes) {
        int i=0;
    while (i<nbColonnes*nbLignes){
      _tableau[i]=' ';
        i=i+1;
        }
    }

    // renvoie le contenu de la case de coordonnées x,y dans [0;2]
    char Grille::getContent(int x, int y){ 
        return _tableau[(x*3)+y];
    }    

        // ajoute un contenu dans une case de coordonnées x,y dans [0;2]
        // le contenu est un entier non nul
    void Grille::setContent(int x, int y, char nouveauContenu){
        _tableau[(x*3)+y]=nouveauContenu;
    }
        
    void Grille::affiche(){
    std::cout <<"teset"<<std::endl;
    int i=0;
    while (i<=8){
        std::cout <<_tableau[i]<<" "<<_tableau[i+1]<<" "<<_tableau[i+2]<<" "<<std::endl;
        i=i+3;
        }
    }

    void Grille::resetContent(){
    int i=0;
    while (i<=8){
        _tableau[i]=' ';
        i=i+1;
        }
    }


#endif
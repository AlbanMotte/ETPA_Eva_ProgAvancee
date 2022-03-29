#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>


    Tictactoe::Tictactoe() : _symboleCourant('X'),_numeroTour(0) {}

    void Tictactoe::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Tictactoe::ajouteSymbole(int x, int y){
        y=x%3;
        x=x/3;
        _grilleDeJeu.setContent(x,y,_symboleCourant);
    }

    bool Tictactoe::testeVictoireVerticale(){
        int x=0;
        int y=0;
        int compteurSymbole;
        while(y<3){
            while(x<3){
                if ( _grilleDeJeu.getContent(x,y)==_symboleCourant){
                    compteurSymbole=compteurSymbole+1;
                }else{
                    compteurSymbole=0;
                }
                if (compteurSymbole==3){
                    std::cout <<"gagne"<<std::endl;
                    return true;
                }
                x=x+1;
            }
            y=y+1;
        }
        return false;
    }

   bool Tictactoe::testeVictoireHorizontale(){
     int x=0;
        int y=0;
        int compteurSymbole;
        while(x<3){
            while(y<3){
                if ( _grilleDeJeu.getContent(x,y)==_symboleCourant){
                    compteurSymbole=compteurSymbole+1;
                }else{
                    compteurSymbole=0;
                }
                if (compteurSymbole==3){
                    std::cout <<"gagne"<<std::endl;
                    return true;
                }
                y=y+1;
            }
            x=x+1;
        }
        return false;
    } 

    bool Tictactoe::testeVictoireDiagonale(){
    int x=0;
    int y=0;
    int compteurSymbole;
        while(x<3){
            if ( _grilleDeJeu.getContent(x,y)==_symboleCourant){
                    compteurSymbole=compteurSymbole+1;
                }else{
                    compteurSymbole=0;
                }
                if (compteurSymbole==3){
                    std::cout <<"gagne"<<std::endl;
                    return true;
                }
            x=x+1;
            y=y+1;
        }
        x=0;
        y=2;
        compteurSymbole=0;
        while(x<3){
            if ( _grilleDeJeu.getContent(x,y)==_symboleCourant){
                    compteurSymbole=compteurSymbole+1;
                }else{
                    compteurSymbole=0;
                }
                if (compteurSymbole==3){
                    std::cout <<"gagne"<<std::endl;
                    return true;
                }
            x=x+1;
            y=y-1;
        }


        return false;
    }

    bool Tictactoe::testeJeuNul(){
        if (_numeroTour==9){
            return true;
        }else{
            return false;
        }
    }

    void Tictactoe::finTour(){
        if(_symboleCourant=='X'){
            _symboleCourant='O';
        }else{
        _symboleCourant='X';
        }
        _numeroTour=_numeroTour+1;
   }

#endif
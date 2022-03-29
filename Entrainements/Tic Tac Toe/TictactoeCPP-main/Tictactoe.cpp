#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>

Tictactoe::Tictactoe() : _symboleCourant('X'), _numeroTour(0) {}

void Tictactoe::afficheGrille()
{
    _grilleDeJeu.affiche();
}

void Tictactoe::ajouteSymbole(int x, int y)
{
    y = x % 3;
    x = x / 3;
    int tmp;
    if (_grilleDeJeu.getContent(x, y) != ' ')
    {
        std::cout << "Case déjà prise ! Choisissez-en une autre !" << std::endl;
        std::cin >> tmp;
        this->ajouteSymbole(tmp, 0);
    }
    else
    {
        _grilleDeJeu.setContent(x, y, _symboleCourant);
    }
}

bool Tictactoe::testeVictoireVerticale()
{
    int x = 0;
    int y = 0;
    int compteurSymbole = 0;
    while (y < 3)
    {
        while (x < 3)
        {
            if (_grilleDeJeu.getContent(x, y) == _symboleCourant)
            {
                compteurSymbole = compteurSymbole + 1;
            }
            else
            {
                compteurSymbole = 0;
            }
            if (compteurSymbole == 3)
            {
                std::cout << "Victoire en verticale !" << std::endl;
                return true;
            }
            x = x + 1;
        }
        x = 0;
        y = y + 1;
    }
    return false;
}

bool Tictactoe::testeVictoireHorizontale()
{
    int coordx = 0;
    int coordy = 0;
    int compteurSymbole = 0;
    while (coordx < 3)
    {
        while (coordy < 3)
        {
            if (_grilleDeJeu.getContent(coordx, coordy) == _symboleCourant)
            {
                compteurSymbole = compteurSymbole + 1;
            }
            else
            {
                compteurSymbole = 0;
            }
            if (compteurSymbole == 3)
            {
                std::cout << "Victoire en horizontal !" << std::endl;
                return true;
            }
            coordy = coordy + 1;
        }
        coordy = 0;
        coordx = coordx + 1;
    }
    return false;
}

bool Tictactoe::testeVictoireDiagonale()
{
    int x = 0;
    int y = 0;
    int compteurSymbole = 0;
    while (x < 3)
    {
        if (_grilleDeJeu.getContent(x, y) == _symboleCourant)
        {
            compteurSymbole = compteurSymbole + 1;
        }
        else
        {
            compteurSymbole = 0;
        }
        if (compteurSymbole == 3)
        {
            std::cout << "Victoire en diagonale !" << std::endl;
            return true;
        }
        x = x + 1;
        y = y + 1;
    }
    x = 0;
    y = 2;
    compteurSymbole = 0;
    while (x < 3)
    {
        if (_grilleDeJeu.getContent(x, y) == _symboleCourant)
        {
            compteurSymbole = compteurSymbole + 1;
        }
        else
        {
            compteurSymbole = 0;
        }
        if (compteurSymbole == 3)
        {
            std::cout << "Victoire en diagonale !" << std::endl;
            return true;
        }
        x = x + 1;
        y = y - 1;
    }

    return false;
}

bool Tictactoe::testeJeuNul()
{
    if (_numeroTour == 9)
    {
        std::cout << "EGALITE" << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}

void Tictactoe::finTour()
{
    if (_symboleCourant == 'X')
    {
        _symboleCourant = 'O';
    }
    else
    {
        _symboleCourant = 'X';
    }
    _numeroTour = _numeroTour + 1;
}

#endif
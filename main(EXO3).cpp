#include <iostream>
#include <string>
#include <vector>
#include "AlbanMOTTE_JV1A_Eva1_EXO3.cpp"
using namespace std;
using std::cout; using std::cin;
using std::endl;
using std::string;

int main(){
Lieu * lieu1;
Lieu * lieu2;
Lieu * lieu3; 

lieu1 = new Ville;
lieu2 = new Foret;
lieu3 = new Grotte;

int listeLieu();
int choixLieu;
cout << "Vous allez pouvoir vous rendre dans 3 lieux différents, ces 3 lieux possèdent une certaine difficulté allant de 1 à 19 !" <<endl;
cout << "Choisissez dans quel lieu vous rendre en entrant sa valeur de difficulté : Ville = 1, Forêt = 9 ou Grotte = 19 !" <<endl;
cin >> choixLieu;

if (choixLieu == 1) {
    cout << "Vous voilà dans " << lieu1 -> getName() << ", c'est " << lieu1 -> getDescription() <<endl;
}

if (choixLieu == 9) {
    cout << "Vous voilà dans " << lieu2 -> getName() << ", c'est " << lieu2 -> getDescription() <<endl;
}

if (choixLieu == 19) {
    cout << "Vous voilà dans " << lieu3 -> getName() << ", c'est " << lieu3 -> getDescription() <<endl;
}

}
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
using std::cout; using std::cin;
using std::endl; using std::map;
using std::string;

//Programme EXO 1
int main(){

    cout << "Vous allez voir 2 destinations et vous pourrez choisir où vous rendre selon le chiffre choisis !" <<endl;
    cout << "Voici les 2 destinations, choisissez vers quelle ville vous rendre : Paris = 1 et Londres = 2" <<endl;
    string choixChiffreVille = "";
    cin >> choixChiffreVille;

    if (choixChiffreVille == "1") {
        cout << "Vous avez atteint Paris !";
    }
    if (choixChiffreVille == "2") {
        cout << "Vous avez atteint Londres !";
    }
}
   
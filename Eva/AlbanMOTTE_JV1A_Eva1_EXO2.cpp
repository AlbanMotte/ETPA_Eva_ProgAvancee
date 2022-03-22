#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
using std::cout; using std::cin;
using std::endl; using std::map;
using std::string;

//Programme EXO 2
int main(){

    cout << "Vous allez voir 2 destinations et vous pourrez choisir où vous rendre en écrivant le nom de la ville !" <<endl;
    cout << "Voici les 2 destinations, choisissez vers quelle ville vous rendre : Paris ou Londres" <<endl;
    string choixChiffreVille = "";
    cin >> choixChiffreVille;

    if (choixChiffreVille == "Paris") {
        cout << "Vous avez atteint Paris !";
    }
    if (choixChiffreVille == "Londres") {
        cout << "Vous avez atteint Londres !";
    }
}
   
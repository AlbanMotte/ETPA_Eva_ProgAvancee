#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
using std::cout; using std::cin;
using std::endl; using std::map;
using std::string;

int main()
{
    //L'ajout d'une variable dans une phrase
    cout << "Entrez n'importe quoi :" <<endl;
    string afficherUnTest = "";
    cin >> afficherUnTest;
    cout << "Ceci est un test, je rajoute : " <<afficherUnTest << " (Normalement, ça c'est ajouté)" <<endl;
    cout<<endl;
    //Liste avec 69 (lol)
    cout<< "Une liste de nombre va appraître, lorsqu'il y aura 69, 'LOL' apparaîtra... Parce que c'est drôle 69" <<endl;
    

    int listeNombre[5] = {12,48,69,34,84};
    
    for (int i = 0; i<5; i++){
        cout << i+1 << " , "<<listeNombre[i];
        if (listeNombre[i] == 69){
            cout<<"(LOL)";
        }
        cout<<" , ";
    }
    cout<<endl;
    cout<<endl;
    //Tableaux Vector
    cout<< "2 Tableaux vont appraître, le deuxième aura 2 valeurs de plus" <<endl;
    vector<int> tableau{10, 52, 36, 40, 12};
    cout<< "Vector initial : ";
    for (const int & i : tableau) {
        cout << i << " ";
    }
    cout<<endl;
    tableau.push_back(68);
    tableau.push_back(72);
    cout<< "Vector mis à jour : ";
    for (const int & i : tableau){
        cout <<i << " ";
    }
    cout<<endl;
    cout<<endl;

    //Dictionnaire MAP
    cout<<"Vous allez choisir un chiffre entre 1 et 5 et le jeu correspondant apparaîtra ! ";
    string choixJeux;
    std::map<string, string> listeJeux = {{"1", "God Of War"},
                                          {"2", "The Elder Scrolls V : Skyrim"},
                                          {"3", "Fallout 4"},
                                          {"4", "DBZ : Kakarot"},
                                          {"5", "Minecraft"}};
    cin >> choixJeux;
    auto item = listeJeux.find(choixJeux);
    if (item != listeJeux.end()) {
        cout <<"Vous avez choisi : "<<
            item->first << " --> " << item->second <<" \n";
    } else {
        cout <<"J'AI DIS ENTRE 1 ET 5 !!" <<endl;
    }
    cout<<endl;

    //Pointeurs
    int maVariable = 12;
    cout << &maVariable << endl;

    int monTableau[3] = {23,7,12};
    cout << &monTableau << endl;
    cout << monTableau << endl;
    cout << *(monTableau) << endl;
    cout << *(monTableau + 1) << endl;
    int maVariable = 12;
    int* ptr=&maVariable;
    (*ptr)++;

}

#include "botaniste.cpp"
#include "plante.cpp"


#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main(){
    string nom;
    
    
    cout<<"entrez votre nom"<<endl;
    cin >> nom;

    Botaniste * joueur1 = new Botaniste(nom);
    cout<<"Botaniste "<<joueur1 ->getNom()<<endl;
    cout<< joueur1 ->getThune()<<" thune"<<endl;
    cout<<"jardin :"<<endl;
    
    joueur1-> addPlante("fleur");
    joueur1 ->afficheJardin();

    

    return 0;
}
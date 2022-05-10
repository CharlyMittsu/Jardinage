
#ifndef botaniste_cpp
#define botaniste_cpp

#include "botaniste.h"
#include "plante.cpp"//??
#include <iostream>

Botaniste::Botaniste(string nom) {
    _nom = nom;
    
}

string Botaniste::getNom(){ 
    return _nom;
}
string Botaniste::getContent(int x){ 
    return _jardin[x]->getNom();
}
int Botaniste::getThune(){
    return _thune;
}

void Botaniste::setThune(int value){
    _thune += value;
    if (_thune<0){_thune = 0;}
}

void Botaniste::afficheJardin(){
    for (int i=0;i<_jardin.size();i++){
        _jardin[i]->affichePlante();
        

    }
    cout << endl;
}
void Botaniste::addPlante(string name){
    
    _jardin.push_back(new Plante(name));
}

void Botaniste::delPlante(int del){}
        

#endif
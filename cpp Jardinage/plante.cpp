#ifndef plante_cpp
#define plante_cpp

#include "plante.h"
#include <iostream>

Plante::Plante(string nom) {
    _nom = nom;
    
}
string Plante::getNom(){ 
    return _nom;
}

void Plante::affichePlante(){
    cout<<"["<<_nom<<"] Maturité :"<<_maturité<<endl;
    
}
void Plante::setEau(int value){
    _eau =+ value;
    if (_eau <0){}
    else if (_eau >_overdose){}
    
}

#endif
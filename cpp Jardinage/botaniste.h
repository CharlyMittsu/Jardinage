#ifndef botaniste_h
#define botaniste_h

#include <string>
#include <vector>
#include "plante.cpp"//??
using namespace std;

class Botaniste{
    protected:
        string _nom;
        int _thune = 30;
        vector <Plante*> _jardin; 
        //asterix important pour utliser les fonction des objets dans le tableau
        
    
        
    
    public:
        Botaniste();
        Botaniste(string nom);
        string getNom();
        string getContent(int x);
        int getThune();

        void setThune(int value);
        void afficheJardin();
        void addPlante(string name);
        void delPlante(int del);
        

};

#endif
#ifndef plante_h
#define plante_h

#include <string>
using namespace std;

class Plante{
    protected:
        string _nom;
        int _maturité = 0;
        int _overdose = 5;
        int _eau = 3;
        int _taille = 3;
        
    
    public:
        Plante();
        Plante(string nom);
        string getNom();

        void affichePlante();

        void setEau(int value);
        void setTaile(int value);

};

#endif
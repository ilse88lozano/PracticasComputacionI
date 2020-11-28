#ifndef PUNTOISOELECTRICO_GRUPO_H
#define PUNTOISOELECTRICO_GRUPO_H

#include <string>
using namespace std;

class Grupo{
private:
    string nombreGrupo;
    float pKa;
    int carga;
public:
    Grupo() {
        nombreGrupo = "";
        pKa = 0;carga=0;
    };
    Grupo(string nom, float pk, int c) {
        nombreGrupo = nom;
        pKa = pk; carga=c;
    }
    int getCarga(float ph);
    float getpKa();
};

#endif //PUNTOISOELECTRICO_GRUPO_H

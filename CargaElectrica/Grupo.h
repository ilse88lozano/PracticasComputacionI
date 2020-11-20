//
// Created by Ilse Lozano on 11/19/20.
//

#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H

#include <string>

using namespace std;

class Grupo{
private:
    float pKa;
    int carga;
    string name;
public:
    Grupo() { name = ""; pKa = 0;carga=0; };
    Grupo(string nom, float pk, int c) { name = nom; pKa = pk; carga=c; }
    int getCarga(float ph);
};

#endif //CARGAELECTRICA_GRUPO_H

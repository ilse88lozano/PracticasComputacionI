#ifndef PUNTOISOELECTRICO_MOLECULA_H
#define PUNTOISOELECTRICO_MOLECULA_H
#include <string>
#include <vector>

#include "Grupo.h"

using namespace std;
class Molecula
{
public:
    void AgregarGrupo(Grupo x);
    float CalcularPuntoIsoelectrico();
    int cargaTotal(float ph);
    Molecula(string nombM) {
        nombreMolecula = nombM;
        cantidadGrupos=0;}
private:
    string nombreMolecula;
    int cantidadGrupos;
    vector<Grupo> grupos;
};

#endif //PUNTOISOELECTRICO_MOLECULA_H

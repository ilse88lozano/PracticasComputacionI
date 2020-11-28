#include "Grupo.h"
float Grupo::getpKa(){
    return pKa;
}
int Grupo::getCarga(float ph){
    return carga+(ph<pKa||(ph-pKa<0.0001));
}


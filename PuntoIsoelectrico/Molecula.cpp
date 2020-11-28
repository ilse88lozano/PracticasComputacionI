//
// Created by usuario on 11/27/20.
//
#include "Molecula.h"

void Molecula::AgregarGrupo(Grupo x){
    grupos.push_back(x);
    cantidadGrupos++;
}
int Molecula::cargaTotal(float ph){
    int sum=0;
    for (int j = 0; j < cantidadGrupos; ++j) {
        sum+=grupos[j].getCarga(ph);
    }
    return sum;
}
float Molecula::CalcularPuntoIsoelectrico(){
    int sum=-1000;
    int c=0;
    float limInf=0;
    float limSup=0;
    float ph=0;
    for(int i=0;i<cantidadGrupos;i++){
        ph=grupos[i].getpKa();
        sum=cargaTotal(ph);
        if(sum==0){
            limSup=ph;
        } else{
            if (cargaTotal(ph+0.01)==0){
                limInf=ph;
            }
        }
    }
    return (limInf+limSup)/2;
}


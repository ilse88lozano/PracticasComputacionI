//
// Created by Ilse Lozano on 11/19/20.
//


#include "Grupo.h"

int Grupo::getCarga(float ph){
    return carga+(ph<=pKa);
}

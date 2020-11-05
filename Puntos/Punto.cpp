//
// Created by usuario on 11/5/20.
//

#include "Punto.h"
#include <iostream>
#include <cmath>
using namespace std;
void Punto2D::SetPosicion(float n1,float n2){
    x=n1;
    y=n2;
}
void Punto2D::Trasladar(float temp1,float temp2){
    x+=temp1;
    y+=temp2;
}
void Punto2D::RotarRespectoAlOrigen(float temp1){
    float x2, y2;
    temp1=temp1*(3.14159/180);
    x2=x*(cos(temp1))-y*(sin(temp1));
    y2=y*(cos(temp1))+x*(sin(temp1));
    x=x2;
    y=y2;
}
void Punto2D::Escalar(float temp1, float temp2 ){
    x*=temp1;
    y*=temp2;
}
float Punto2D::GetX(){
    return x;
}
float Punto2D::GetY(){
    return y;
}

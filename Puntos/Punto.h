//
// Created by usuario on 11/5/20.
//

#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H
class Punto2D {
    private:
        float x{0};
        float y{0};
    public:
        void SetPosicion(float n1,float n2);
        void Trasladar(float temp1,float temp2);
        void RotarRespectoAlOrigen(float temp1);
        void Escalar(float temp1, float temp2);
        float GetX();
        float GetY();
    };


#endif //PUNTOS_PUNTO_H

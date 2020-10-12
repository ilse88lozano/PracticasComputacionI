/*===========================================================
 * AUTHOR: Ilse Lozano
 * ilse.lofi@gmail.com
 * 10-10-2020
 ============================================================*/
#include <iostream>
using namespace std;
int main() {
    float num1 = 0;
    float num2 = 0;
    char symb='s';
    float result = 0;

    cout << "Este programa hace operaciones basicas entre dos numeros."<< endl;
    cout <<"Primer numero:";
    cin >> num1;
    cout <<"Operacion:";
    cin >> symb;
    cout <<"Segundo numero:";
    cin >> num2;
    if (symb == '+'){
        result=num1+num2;
    }
    if (symb == '-'){
        result=num1-num2;
    }
    if (symb == '*'){
        result=num1*num2;
    }
    if (symb == '/' && num2 ==0){
        cout <<"Las divisiones entre cero no están definidas";
        return 0;
    }
    if (symb == '/'){
        result=num1/num2;
    }
    if (symb == '%'){
        result= (int)num1%(int)num2;
    }
    cout << "Resultado: " <<num1 <<symb <<num2 <<"=" <<result <<endl;
}

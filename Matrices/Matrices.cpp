/*===========================================================
 * AUTHOR: Ilse Lozano
 * ilse.lofi@gmail.com
 * 10-10-2020
 ============================================================*/
#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
using namespace std;
//____________________________________________________//
int main(){
    int n;
    char symb='s';
    cout<<"Indique el número de filas y columnas de la matrices"<<endl;
    cin>>n;
    int A[n][n];
    int B[n][n];
    int R=0;
    for (int i = 0; i < n; i++) {
        for(int j=0; j< n;j++){
            A[i][j]=(rand()%10)+1;
        }
    }
    cout<<endl;
    for (int i = 0; i < n; i++) {
        for(int j=0; j< n;j++){
            B[i][j]=(rand()%10)+1;
        }
    }
    //Mostrar Matriz
    cout<<"Matriz 1"<<endl;
    for (int i = 0; i < n; i++) {
        for(int j=0; j< n;j++){
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matriz 2"<<endl;
    for (int i = 0; i < n; i++) {
        for(int j=0; j< n;j++){
            cout<<B[i][j]<<"  ";
        }
        cout<<endl;
    }
    //Operaciones
    cout <<"¿Qué operacion desea realizar? (+,-,*,/)"<<endl;
    cin >> symb;
    if (symb == '+'){
        cout<<"Matriz Resultante:"<<endl;
        for (int i = 0; i < n; i++) {
            for(int j=0; j< n;j++){
                cout<<A[i][j]+B[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    if (symb == '-'){
        cout<<"Matriz Resultante:"<<endl;
        for (int i = 0; i < n; i++) {
            for(int j=0; j< n;j++){
                cout<<A[i][j]-B[i][j]<<"  ";
            }
            cout<<endl;
        }    }
    if (symb == '*'){
        cout<<"Matriz Resultante:"<<endl;
        for (int i = 0; i < n; i++) {
            for(int j=0; j< n;j++){
                R=0;
                for (int k = 0; k < n; ++k) {
                    R+=A[i][k]*B[k][j];
                }
                cout<<R<<"  ";
            }
            cout<<endl;
        }
    }
    if (symb == '/'){
        cout<<"Matriz Resultante:"<<endl;
        for (int i = 0; i < n; i++) {
            for(int j=0; j< n;j++){
                cout<<A[i][j]/B[i][j]<<"  ";
            }
            cout<<endl;
        }    }
    return 0;
}

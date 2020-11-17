#include <iostream>
#include <vector>
#include "inventario.h"
using namespace std;


// Declaracion de funciones
void menu();
int option_menu();

int main() {
    //Declaracion de variables

    vector<string> articleVec;
    vector<int> nArticles;
    vector<float> Cost;
    vector<float> Sell;

    //Creamos el objeto minventario de la clase inventario para llamar funciones
    inventario minventario;
    //menu();  <- Se debe borrar para que no salga repetido

    int res=1;

    while (res==1){
        menu();

        switch (option_menu()) {
            case 1: {
                int num;
                cout << "Si desea añadir otro articulo presione 1, para salir presione cualquier otro numero" << endl;
                cin >> num;
                while (num == 1) {
                    string answer;
                    int amount;
                    float price, costsell;
                    cout << "Ingrese el articulo" << endl;
                    cin >> answer;
                    cout << "Ingrese la cantidad" << endl;
                    cin >> amount;
                    cout << "Ingrese el precio de provedor del articulo"<<endl;
                    cin >> price;
                    cout << "Ingrese el precio de venta del articulo" << endl;
                    cin >> costsell;
                    minventario.AddArticle(answer);
                    minventario.setAmount(amount);
                    minventario.setCost(price);
                    minventario.setSell(costsell);
                    cout<<"Si desea agregar otro articulo ingrese 1, de lo contrario presione otro numero"<<endl;
                    cin>>num;
                }
                break;
            }
            case 2: {
                minventario.printInv();
                break;
            }
            case 3: {
                float gain = minventario.calcGain();
                cout << "La ganancia aproximada con base en el inventario es: " << gain << endl;
                break;

            }
            case 4: {
                int index,quant;
                cout<<"Ingrese el indice de elemento a eliminar"<<endl;
                cin>>index;
                cout<<"Ingrese la cantidad de elementos a eliminar"<<endl;
                cin>>quant;
                if(quant>=minventario.getnArticles(index)){
                    minventario.DelArticles(index,quant);
                }
                else{
                    minventario.DelArticle(index, quant);
                }
                break;
            }

            default:
                cout << "Operacion no valida" << endl;
                break;
        }
        cout<<"¿Desea regresar al menu? presione 1, de lo contrario, presione otro numero"<<endl;
        cin>>res;
    }
    return 0;
}
void menu(){
    cout<<"Funciones"<<endl;
    cout<<"1.Añadir un articulo"<<endl<<"2.Visualizar inventario"<<endl<<"3.Calcular ganancia"<<endl<<"4.Eliminar un articulo"<<endl;


}
int option_menu(){
    int response;
    cout<<"Ingrese la opcion que desea utilizar"<<endl;
    cin>>response;
    return(response);
}


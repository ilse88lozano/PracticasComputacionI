#include "inventario.h"
#include<iostream>
#include<vector>
#include<string>

using namespace std;

//Agregar artículos
void inventario::AddArticle(string art){
    articleVec.push_back(art);
    return;
}

//Borrar artículos
void inventario::DelArticles(int index,int quant){

    articleVec.erase(articleVec.begin() + index );
    nArticles.erase(nArticles.begin() + index );
    Cost.erase(Cost.begin()+index);
    Sell.erase(Sell.begin()+index);
}

void inventario::DelArticle( int index,int quant){

    nArticles[index]-=quant;
}

//Establece el numero de articulos para cada articlo
void inventario::setAmount(int amount){
    nArticles.push_back(amount);
    return;
}

//Establece el costo de compra
void inventario::setCost(float costo){
    Cost.push_back(costo);
    return;
}
//Establece el costo de venta
void inventario::setSell(float cost_sell ){
    Sell.push_back(cost_sell);
    return;
}


//Tenemos los 4 vectores: articulo, cantidad, costo y  precio de venta
void inventario::printInv(){
    //Imprime los encabezados
    cout<<"|"<<"Articulos"<<"\t"<<"No. Articulos"<<"\t"<<"Costo compra"<<"\t"<<"Costo venta"<<"\t"<<"|"<<endl;
    //Imprime una linea divisoria
    cout<<"------------------------------------------------------------------"<<endl;
    //Imprime los elementos de los cuatro vectores de datos, en orden descendente para aparentar una tabla
    for (int i=0; i<articleVec.size();i++ ){
        cout<<"|"<<i<<"\t"<<articleVec[i]<<"\t"<<nArticles[i]<<"\t"<<Cost[i]<<"\t"<<Sell[i]<<"\t"<<"|"<<endl;
    }
}

//Calcula ganancia con base en los costos de compra y venta
float inventario::calcGain(){
    float sumCost=0;
    float sumVent=0;
    for (int i=0;i<nArticles.size();i++){
        sumCost+=Cost[i]*nArticles[i];
        sumVent+=Sell[i]*nArticles[i];
    }
    return(sumVent-sumCost);
}

int inventario::getnArticles(int i){
    return nArticles[i];
}


#include "inventario.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

//Agregar artículos
void inventario::AddArticle(vector<string> articleVec,string article){
    articleVec.push_back(article);
}

//Borrar artículos
void inventario::DelArticle(vector<string> articleVec, string article){


}

//Establece el numero de articulos para cada articlo
void inventario::setAmount(vector<int> nArticles,int amount){
    nArticles.pushback(amount);
}

//Establece el costo de compra
void inventario::setCost(vector<float> Cost,float cost){

    Cost.push_back(cost);
}
//Establece el costo de venta
void inventario::setSell(vector<float> Sell,float cost_sell ){

    Sell.push_back(cost_sell);
}


//Tenemos los 4 vectores: articulo, cantidad, costo y  precio de venta
void inventario::printInv(vector<string> articleVec,vector<int> nArticles,vector<float> Cost,vector<float> Sell){
    //Imprime los encabezados
    cout<<"|"<<"Articulos"\t<<"No. Articulos"\t<<"Costo compra"\t<<"Costo venta"\t<<"|"<<endl;
    //Imprime una linea divisoria
    cout<<"_______________________________________________________________________"<<endl;
    //Imprime los elementos de los cuatro vectores de datos, en orden descendente para aparentar una tabla
    for (int i=0; i<articleVec.size();i++ ){
        cout<<"|"<<articleVec[i]\t<<nArticles[i]\t<<Cost[i]\t<<Sell[i]\t<<"|"endl;
    }
}

//Calcula ganancia con base en los costos de compra y venta
float inventario::calcGain(vector<int> nArticles,vector<float> Cost,vector<float> Sell){
    sumCost=0;
    sumVent=0;
    for (int i=0;i<nArticles.size();i++){
        sumCost+=Cost[i]*nArticles[i];
        sumVent+=Sell[i]*nArticles[i];
    }
    return(sumVent-sumCost);
}

#include "inventario.h"
#include<iostream>
#include<vector>
#include<string>

using namespace std;

//Agregar artículos
vector<string> inventario::AddArticle(vector<string> articleVec,string article){
    articleVec.push_back(article);
    return(articleVec);
}

//Borrar artículos
void inventario::DelArticles(vector<string> articleVec,vector<int> nArticles,vector<float> Cost,vector<float> Sell, int index,int quant){

    articleVec.erase(articleVec.begin() + index );
    nArticles.erase(nArticles.begin() + index );
    Cost.erase(Cost.begin()+index);
    Sell.erase(Sell.begin()+index);
}

void inventario::DelArticle(vector<int> nArticles, int index,int quant){

    nArticles[index]-=nArticles[quant];
}

//Establece el numero de articulos para cada articlo
vector<int> inventario::setAmount(vector<int> nArticles,int amount){
    nArticles.push_back(amount);
    return(nArticles);
}

//Establece el costo de compra
vector<float> inventario::setCost(vector<float> Cost,float cost){

    Cost.push_back(cost);
    return(Cost);
}
//Establece el costo de venta
vector<float> inventario::setSell(vector<float> Sell,float cost_sell ){

    Sell.push_back(cost_sell);
    return(Sell);
}


//Tenemos los 4 vectores: articulo, cantidad, costo y  precio de venta
void inventario::printInv(vector<string> articleVec,vector<int> nArticles,vector<float> Cost,vector<float> Sell){
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
float inventario::calcGain(vector<int> nArticles,vector<float> Cost,vector<float> Sell){
    float sumCost=0;
    float sumVent=0;
    for (int i=0;i<nArticles.size();i++){
        sumCost+=Cost[i]*nArticles[i];
        sumVent+=Sell[i]*nArticles[i];
    }
    return(sumVent-sumCost);

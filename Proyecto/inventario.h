#ifndef PROYECTO_COMPU_INVENTARIO_H
#define PROYECTO_COMPU_INVENTARIO_H
#include<string>
#include <vector>

using namespace std;

class inventario
{
private:
    vector<string> articleVec;
    vector<int> nArticles;
    vector<float> Cost;
    vector<float> Sell;
public:
    vector<string> AddArticle(vector<string> articleVec,string article);
    void DelArticles(vector<string> articleVec,vector<int> nArticles,vector<float> Cost,vector<float> Sell, int index, int quant);
    vector<int> setAmount(vector<int> nArticles,int amount);
    void DelArticle(vector<int> nArticles, int index, int quant);
    vector<float> setCost(vector<float> Cost,float cost);
    vector<float> setSell(vector<float> Sell,float costsell );
    void printInv(vector<string> articleVec,vector<int> nArticles,vector<float> Cost,vector<float> Sell);
    float calcGain(vector<int> nArticles, vector<float> Cost, vector<float> Sell);
};


#endif //PROYECTO_COMPU_INVENTARIO_H

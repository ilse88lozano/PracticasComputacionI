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
    void AddArticle(vector<string> articleVec,string article);
    void DelArticle(vector<string> articleVec, string article);
    int setAmount(vector<int> nArticles,int amount);
    void setCost(vector<float> Cost,float cost);
    void setSell(vector<float> Sell,float costsell );
    void printInv(vector<string> articleVec,vector<int> nArticles,vector<float> Cost,vector<float> Sell);
    float calcGain(vector<int> nArticles, vector<float> Cost, vector<float> Sell);
};


#endif //PROYECTO_COMPU_INVENTARIO_H

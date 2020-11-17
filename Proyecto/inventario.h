
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
    void AddArticle(string art);
    void DelArticles( int index, int quant);
    void setAmount(int amount);
    void DelArticle(int index, int quant);
    void setCost(float costo);
    void setSell(float costsell );
    void printInv();
    float calcGain();
};


#endif //PROYECTO_COMPU_INVENTARIO_H

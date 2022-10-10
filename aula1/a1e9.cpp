#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1;
    cout<<"Indique a abcissa do ponto A: \n";
    cin >> x1;
    int y1;
    cout<<"Indique a ordenada do ponto A: \n";
    cin>> y1;
    int x2;
    cout<<"Indique a abcissa do ponto B: \n";
    cin >> x2;
    int y2;
    cout<<"Indique a ordenada do ponto B: \n";
    cin>> y2;
    double distx = x2-x1;
    double disty= y2-y1;
    double distanciaquadrado= distx*distx + disty*disty;
    int distancia= std::sqrt(distanciaquadrado);
    cout<<"A distancia entre o ponto A e B e: " <<distancia<<std::endl;
    return 0;





}

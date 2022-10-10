#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double cateto1;
    cout<<"Indique a medida do primeiro cateto: \n";
    cin>>cateto1;
    double cateto2;
    cout<<"Indique a medida do segundo cateto: \n";
    cin>>cateto2;
    double hipquadrado=cateto1*cateto1+cateto2*cateto2;
    double hip = std::sqrt(hipquadrado);
    double angulo1=cateto1/hip;
    double angulo=std::acos(angulo1);
    double angulograus=angulo*(180/3.14);
            cout<<"O angulo e: " << angulograus <<std::setw(2)<<" graus."<< std::endl;
    return 0;


}

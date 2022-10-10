#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{ int segundos;
    cout<<"Indique quantos segundos quer transformar: \n";
    cin>>segundos;
    int horas= segundos/3600;
    int resto=segundos%3600;
    int minutos= resto/60;
    int resto2= resto%60;
    int segundos2=resto2/60;
    cout<<"A hora exata e a seguinte \n"<<std::setw(2)<<horas<<":"<<std::setw(2)<<minutos<<":"<<std::setw(2)<<segundos2;
    return 0;

}

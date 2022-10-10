#include <iostream>
using namespace std;
int main()
{
    int v1;
    cout <<"Indique a velocidade1: \n";
    cin>>v1;
    int v2;
    cout <<"Indique a velocidade2: \n";
    cin>>v2;
    double vm= (2*v1*v2)/(v1+v2);
    cout<<"A velocidade media e: "<<vm;
    return 0;



}

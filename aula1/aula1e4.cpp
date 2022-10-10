#include <iostream>
using namespace std;
int main ()
{
    int pp;
    cout <<"Diz o peso da pratica: \n";
    cin >> pp;
    int pt;
    cout <<"Diz o peso da teorico pratica: \n";
    cin>>pt;
    int p;
    cout <<"Diz a nota pratica: \n ";
    cin >> p;
    int tp;
    cout<<"Diz a nota teorico pratica: \n ";
    cin >>tp;
    double final = pp * p + pt * tp;
    cout <<"A nota e:  \n"<< final;
    return 0;
}
#include <iostream>
using namespace std;
int main ()
{const double pp =0.75;
    const double pt=0.25;
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
#include <iostream>
using namespace std;
int main ()
{ int c;
    cout<<"Queres converter quantos graus celsius? \n";
    cin >> c;
    double resultado= 1.8*c +32;
    cout << c <<" graus celsius=" << resultado<< "graus fahrenheit";
    return 0;

}


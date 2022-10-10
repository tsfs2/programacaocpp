#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double num1,num2;
    cout<<"Indique dois numeros: \n"<<endl;
    cin>>num1>>num2;
    if (num1>num2){
        cout<<"Maior numero: "<<num1<<endl;

    }
    else{
        if (num2>num1){
            cout<<"Maior numero: "<<num2<<endl;

        }
        else{
            cout<<"Os numeros sao iguais."<<endl;
        }
    }

    return 0;

}

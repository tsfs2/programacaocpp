#include <iostream>
using namespace std;
int main(){
    double num1,num2,num3;
    cout<<"Indique 3 numeros diferentes: \n"<<endl;
    cin>>num1>>num2>>num3;
    if (num1>num2 && num1>num3){
        cout<<"Maior numero: \n"<<num1<<endl;

    }
    else{
        if (num2>num1 && num2>num3){
            cout<<"Maior numero: \n"<<num2<<endl;

        }
        else{
            cout<<"Maior numero: \n"<<num3<<endl;
        }
    }
    return 0;
}

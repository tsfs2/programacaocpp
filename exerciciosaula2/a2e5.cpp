#include <iostream>
using namespace std;
int main(){
    int numero;
    cout<<"Indique um numero: \n"<<endl;
    cin>>numero;
    int resultado = (numero%2);
    if (resultado==0){
        cout<<"O numero e par."<<endl;

    }
    else{
        cout<<"O numero e impar."<<endl;
    }
    return 0;


}

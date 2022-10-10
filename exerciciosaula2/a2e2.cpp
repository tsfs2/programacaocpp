#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double altura,peso;
    cout<<"Altura (m) e peso (kg)? ";
    cin>>altura>>peso;
    double imc=peso/pow(altura,2.0);
    cout << "Indice de massa corporal: " << imc <<endl;
    if(imc<18.5){
        cout << "Abaixo do peso"<<endl;
    }
    else{
        if(imc<25){
            cout <<"Normal"<<endl;
        }
        else{
            if((25<=imc) && (imc<30)){
                cout<<"Acima do peso"<<endl;
            }
            else{
                if(imc>=30){
                    cout<<"Obesidade"<<endl;
                }
            }
        }
    }
    return 0;
}

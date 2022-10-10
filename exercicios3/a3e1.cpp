#include <iostream>
#include <float.h>
using namespace std;
int main(){
 int numero=-1;
 int media=0;
 int contador=0;
 int soma=0;
 int valormax=0;
 //int valormax=DBL_MIN;
 int valormin=999;
 //int valormin=DBL_MAX;
 cout<<"Escreva numeros reais: (0 para sair)\n";
        while (numero != 0) {
            cin >> numero;
            if (numero>valormax){
                valormax=numero;
            }

            if (numero!=0){
                //cout<<numero;
                if (numero<valormin){
                    valormin=numero;
                }
                ++contador;
            }

            soma+=numero;

        }
        //contador=contador-1;
        media = soma/contador;
        cout<<"\nA media e: "<<media;
        cout<<"\nForam inseridos: "<<contador<<" numeros.";
        cout<<"\nO valor maximo e: "<<valormax;
        cout<<"\nO valor minimo e: "<<valormin;



    return 0;
}

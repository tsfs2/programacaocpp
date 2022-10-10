#include <iostream>
#include <mshtmlc.h>
using namespace std;
int limite=0;
int resposta;
int respostaa;
int respostaaa;
int main(){
    cout<<"Pensa numas coordenadas no intervalo [0-100]!"<<endl;
    cout<<"Para que lado devo ir? Esquerdo=10 , Centro=20 ou Direito=30?"<<endl;
    cin>>resposta;
    if (resposta==10){
        cout<<"Para Cima? Nao-0 Sim-1"<<endl;
        cin>>respostaa;
        if (respostaa==0){
            cout<<"Para Baixo? Nao-0 Sim-1"<<endl;
            cin>>respostaaa;

        }
        else{
            cout<<"Eu sei que e no centro, "

        }
    }

    return 0;
}

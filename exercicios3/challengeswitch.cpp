#include <iostream>
using namespace std;
int resposta;
int respostaa;
int respostaaa;
int sim;
int main(){
    cout<<"Pensa numas coordenadas segundo a imagem!"<<endl;
    cout<<"Vou para a direita? Nao-0 Sim-1"<<endl;
    cin>>resposta;
    switch(resposta){
        case 0:
            cout<<"Vou para a esquerda-0 ou fico no centro-1?";
            cin>>respostaa;
            if (respostaa==0){
                cout<<"Sei que escolheste a esquerda"<<endl;
            }
            else{
                cout<<"Sei que escolheste o centro"<<endl;
            }

        case 1:
            cout<<"Boa!Agora sei que escolheste a direita "<<endl;
            cout<<"Vou para baixo-0 ou para cima-1?"<<endl;
            cin>>respostaaa;
            if (respostaaa==0){
                cout<<"Sei que escolheste SE"<<endl;
                cout<<"Foram mais de 50 unidades?"<<endl;
            }
            else{
                cout<<"Sei que escolheste NE"<<endl;
                cout<<"Foram mais de 50 unidades? Sim-1 "<<endl;
                cin>>sim;
                while (sim==1){
                    
                }

            }



    }
}
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int dia,mes,ano;
    cout<<"Indique o numero do dia do mes e do ano: \n";
    cin>>dia;
    cin>>mes;
    cin>>ano;
    int diaseguinte=dia+1;
    int messeguinte=mes+1;
    int anoseguinte=ano+1;
    int biseculo = (ano%400);
    int binormal=(ano%4);
    if ((mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) && (dia==31)){
        int ld=31;
        cout<<"A data seguinte:1/"<<messeguinte<<ano;


    }
    else if (mes==4 || mes==6 || mes==9 || mes==11){
        int ld=30
        cout<<"O mes tem 30 dias."<<endl;
    }
    else{
        if (biseculo==0){
            int ld=29
            cout<<"O mes tem 29 dias."<<endl;

        }
        else{
            if (binormal==0){
                int ld=29
                cout<<"O mes tem 29dias."<<endl;
            }
            else {
                int ld=28
                cout << "O mes tem 28 dias." << endl;
            }
        }
    }
    return 0;
}


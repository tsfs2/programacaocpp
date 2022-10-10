#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int dia,mes,ano;
    cout<<"Indique o numero do dia, do mes e do ano: \n";
    cin>>dia;
    cin>>mes;
    cin>>ano;
    int diaseguinte=dia+1;
    int diaanterior=dia-1;
    int messeguinte=mes+1;
    int mesanterior=mes-1;
    int anoanterior=ano-1;
    int biseculo = (ano%400);
    int binormal=(ano%4);
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        if ((dia>1 && dia<30)){
            cout<<"Data seguinte:"<<diaseguinte<<"/"<<mes<<"/"<<ano<<"\n"<<"Data anterior:"<<diaanterior<<"/"<<mes<<"/"<<ano;

        }
        else if ((dia==1) && (mes==1)){
            cout<<"Data seguinte:"<<diaseguinte<<"/"<<mes<<"/"<<ano<<"\n"<<"Data anterior:"<<"31/12/"<<anoanterior;
        }
        else if ((dia==1) && (mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)) {
            cout<<"Data seguinte:"<<diaseguinte<<"/"<<mes<<"/"<<ano<<"\n"<<"Data anterior:"<<"30/"<<mesanterior<<"/"<<ano;
        }
    }
    else if (mes==4 || mes==6 || mes==9 || mes==11){
        if ((dia>1 && dia<29)){
            cout<<"Data seguinte:"<<diaseguinte<<"/"<<mes<<"/"<<ano<<"\n"<<"Data anterior:"<<diaanterior<<"/"<<mes<<"/"<<ano;

        }
        else if (dia==1){
            cout<<"Data seguinte:"<<diaseguinte<<"/"<<mes<<"/"<<ano<<"\n"<<"Data anterior:"<<"31/"<<mesanterior<<"/"<<ano;
        }
        else{
            cout<<"Data seguinte:1/"<<messeguinte<<"/"<<ano<<"\n"<<"Data anterior:"<<diaanterior<<"/"<<mes<<"/"<<ano;
        }

    }
    else{
        if ((biseculo==0) && (dia==29)){
            cout<<"Data seguinte:1/"<<messeguinte<<"/"<<ano<<"\n"<<"Data anterior:"<<diaanterior<<"/"<<mes<<"/"<<ano;

        }
        else{
            if ((binormal==0) && (dia==29)){
                cout<<"Data seguinte:1/"<<messeguinte<<"/"<<ano<<"\n"<<"Data anterior:"<<diaanterior<<"/"<<mes<<"/"<<ano;
            }
            else{
                cout<<"Data seguinte:"<<diaseguinte<<"/"<<mes<<"/"<<ano<<"\n"<<"Data anterior:"<<diaanterior<<"/"<<mes<<"/"<<ano;
            }
        }
    }
    return 0;
}



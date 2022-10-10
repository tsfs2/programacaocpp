#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int mes,ano;
   cout<<"Indique o numero do mes e o ano: \n";
   cin>>mes;
   cin>>ano;
   int biseculo = (ano%400);
   int binormal=(ano%4);
   if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
       cout<<"O mes tem 31 dias."<<endl;
   }
   else if (mes==4 || mes==6 || mes==9 || mes==11){
       cout<<"O mes tem 30 dias."<<endl;
   }
   else{
       if (biseculo==0){
           cout<<"O mes tem 29 dias."<<endl;

       }
       else{
           if (binormal==0){
               cout<<"O mes tem 29dias."<<endl;
           }
           else {
               cout << "O mes tem 28 dias." << endl;
           }
       }
   }
   return 0;
}


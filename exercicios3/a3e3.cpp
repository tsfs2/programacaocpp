#include <iostream>
using namespace std;
int main(){
 int n,i,c=0;
 cout<<"Indique um numero: "<<endl;
 cin>>n;
 for (i=1;i<=n;i++){
     if (n%i==0){
         c++;
         //cout<<c<<endl;
         //cout<<i<<endl;
     }
 }
 if (c==2){
     cout<<"O numero e primo"<<endl;
 }
 else{
     cout<<"O numero nao e primo"<<endl;
 }
 return 0;



}

#include <iostream>
using namespace std;
int main(){
    int n=0;
    int i=0;
    int soma;
    int b;
    cout<<"Indique um numero inteiro: "<<endl;
    cin>>n;
    cout<<"Os divisores de "<<n<<" sao :\n";
    for (i=1;i<=n;i++){
        if((n%i)==0){
            cout<<i<<endl;
        }
    }
    //cout<<"Os divisores de "<<n<<" sao :\n";
    //cout<<i;
    for (i=1;i<=n;i++){
        if((n%i)==0){
            soma+=i;
        }
        }
    b=soma-n;
    //cout<<b<<endl;
    if (b<n){
        cout<<"E o numero "<<n<<" e defeciente."<<endl;
    }
    else if (b>n){
        cout<<"E o numero "<<n<<" e abundante."<<endl;
    }
    else{
        cout<<"E o numero "<<n<<" e perfeito."<<endl;
    }
        return 0;
    }
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
    int litros;
    cout<<"Quantos litros vai abastecer?: \n"<<endl;
    cin>>litros;
    double preco=(litros*1.40);
    double precodisc=preco-(preco*(0.10));
    if ((0<litros) && (litros<40)){
        cout<<"O preco e "<<preco<<" euros."<<endl;

    }
    else {
        cout<<"O preco e "<< precodisc<<" euros."<<endl;
    }
    return 0;

}



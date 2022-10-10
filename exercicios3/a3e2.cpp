#include <iostream>
using namespace std;
int main(){
    srand(time(NULL));
    int numero=(1 + rand() % 100);
    int inserido;
    //cout <<numero<< endl;
    do {
        cout<<"Indique um numero entre 0 e 100: ";
        cin>>inserido;
        if (inserido>numero){
            cout<<"High"<<endl;

        }
        else if (inserido<numero){
            cout<<"Low"<<endl;
        }
        else{
            cout<<"Certo"<<endl;
        }

    }while (inserido!=numero);

    return 0;

}
#include <iostream>
using namespace std;
int main(){
    int mes;
    cout<<": \n";
    cin>>mes;
    switch(mes)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"Tem 31dias";
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"Tem 30 dias";
        case 2:
        break;
    }
    return 0;

}

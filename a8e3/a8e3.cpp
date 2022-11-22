#include <iostream>
#include "imag.h"
using namespace std;
int main(){

    Complex_t n1,n2,res;
    n1 = read_complex();
    n2 = read_complex();

    addition(n1,n2);
    //cout << " A soma e:";
    //print_number(res);
    /*subtraction(Complex_t number,Complex_t number2);
    multiplication(Complex_t number,Complex_t number2);
    division(Complex_t number,Complex_t number2);*/
 return 0;
 }

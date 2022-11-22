#include <iostream>
#include "imag.h"
using namespace std;

Complex_t read_complex(void){
    Complex_t tmp;
    cout<<"Say a real number"<<endl;
    cin>>tmp.real;
    cout<<"Say a complex number"<<endl;
    cin>>tmp.imaginary;
    return tmp;
}
void print_number(Complex_t number){
    cout<<"The number is "<<"("<<number.real<<"+"<<number.imaginary<<"i)\n";
}
void addition(Complex_t number, Complex_t number2){
    cout<<"The addition between "<<"("<<number.real<<"+"<<number.imaginary<<"i)"<<" and "<<"("<<number2.real<<"+"<<number2.imaginary<<"i)"<<" is:\n";
    cout<<"("<<number.real+number2.real<<"+"<<number.imaginary+number2.imaginary<<"i"<<")";
}
void subtraction(Complex_t number, Complex_t number2){
    cout<<"\nThe subtraction between "<<"("<<number.real<<"+"<<number.imaginary<<"i)"<<" and "<<"("<<number2.real<<"+"<<number2.imaginary<<"i)"<<" is:\n";
    cout<<"("<<number.real-number2.real<<"+"<<number.imaginary-number2.imaginary<<"i"<<")";
}
void multiplication(Complex_t number, Complex_t number2){
    cout<<"\nThe multiplication between "<<"("<<number.real<<"+"<<number.imaginary<<"i)"<<" and "<<"("<<number2.real<<"+"<<number2.imaginary<<"i)"<<" is:\n";
    cout<<"("<<number.real*number2.real-number.imaginary*number2.imaginary<<"+"<<number.imaginary*number2.imaginary+number.imaginary*number2.real<<"i"<<")";
}
void division(Complex_t number,Complex_t number2){
    cout<<"\nThe division between "<<"("<<number.real<<"+"<<number.imaginary<<"i)"<<" and "<<"("<<number2.real<<"+"<<number2.imaginary<<"i)"<<" is:\n";
    cout<<"("<<"("<<number.real*number2.real<<"+"<<number.imaginary*number2.imaginary<<"/"<<number2.real*number2.real<<"+"<<number2.imaginary*number2.imaginary<<"+";
    cout<<"(("<<number.imaginary*number2.real<<"-"<<number.real*number2.imaginary<<"/";

}
void teste(int i){
    cout << "Teste " << i <<  endl;
}
//there is an uncomplete part about saying wich coordinate was the biggest

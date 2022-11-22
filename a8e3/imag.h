#ifndef AULA8_IMAG_H
#define AULA8_IMAG_H
typedef struct Complex{
    double real;
    double imaginary;
}Complex_t;

typedef struct Complex Complex_t;
Complex_t read_complex(void);
void print_number(Complex_t number);

void addition(Complex_t number,Complex_t number2);
void subtraction(Complex_t number,Complex_t number2);
void multiplication(Complex_t number,Complex_t number2);
void division(Complex_t number,Complex_t number2);

#endif //AULA8_IMAG_H

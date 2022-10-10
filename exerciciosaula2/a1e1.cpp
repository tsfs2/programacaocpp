#include <iostream>
using namespace std;
int main ()
{
    int p=18;
    int tp=14;
    double final = 0.75 * p + 0.25 * tp;
    if (final>9.5)
        cout << "Aprovado\n" <<"Media: " <<final << endl;
    else
        cout << "Reprovado\n" << endl;

    return 0;
}

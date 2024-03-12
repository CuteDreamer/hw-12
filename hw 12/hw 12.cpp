#include <iostream>
using namespace std;
int main()
{
    double num1 = 5;
    double num2 = 10;

    double* pn = &num1;
    double* pr = &num2;
    cout << "Lenght in variables = " << *pr - *pn << "\n";
    cout << "Lenght in bytes = " << (*pr - *pn) * 8;
}

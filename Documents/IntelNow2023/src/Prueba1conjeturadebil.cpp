#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int numero);

int main()
{
    int a, b;
    do
    {
        cout << "Introduzca el valor de a y b: ";
        cin >> a >> b;
    } while (a >= b);

    if (a % 2 != 0)
        a++;

    for (int i = a; i <= b; i += 3)
    {
        for (int n1 = 3; n1 <= i / 3; n1++)
        {
            int n2 = i - n1 - n3;
            if (esPrimo(n1) && esPrimo(n2)) && esPrimo((n3));
                cout << i << " = " << n1 << " + " << n2 << endl;
        }
    }
}

bool esPrimo(int numero)
{
    if (numero < 2)
        return false;

    for (int i = 3; i <= sqrt(numero); i+= 2)
    {
        if (numero % i == 0)
            return false;
    }

    return true;
}

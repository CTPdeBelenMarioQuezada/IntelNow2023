#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int numero);

int main()
{
    int a, b;
    do
    {
        cout << "Introduzca el valor de a y b (a debe ser mayor que 5): ";
        cin >> a >> b;
    } while (a >= b || a <= 5);

    if (a % 2 == 0)
        a++;

    for (int i = a; i <= b; i += 2)
    {
        for (int n1 = 2; n1 <= i / 3; n1++)
        {
            for (int n2 = n1; n2 <= i / 2; n2++)
            {
                int n3 = i - n1 - n2;
                if (esPrimo(n1) && esPrimo(n2) && esPrimo(n3))
                    cout << i << " = " << n1 << " + " << n2 << " + " << n3 << endl;
            }
        }
    }
}

bool esPrimo(int numero)
{
    if (numero < 2)
        return false;

    for (int i = 2; i <= sqrt(numero); i++)
    {
        if (numero % i == 0)
            return false;
    }

    return true;
}


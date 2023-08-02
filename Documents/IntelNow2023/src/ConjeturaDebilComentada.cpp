#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int numero);//funcion que nos va servir mas adelante para verificar si un numero es primo o no (se usa la misma funcion de la conjetura fuerte)

int main()
{
    int a, b; // dos variables que su valor será definido al igual que en la conjetura fuerte, por el usuario,
             // donde "a" es el valor de inicio y "b" es el valor maximo 
    do
    {
        cout << "Introduzca el valor de a y b (a debe ser mayor que 5): "; //aqui es donde nosotros pedimos esos valores de entrada "a" y "b"
        cin >> a >> b;           // hacemos que esos valores se almacenen para luego ocuparlos en los calculos de la conjetura.
    } while (a >= b || a <= 5); // este bucle hace que si el valor que se le da a "a" es menor a cinco
	                           //se repita para que el usuario le de otro valor a "a" mayor o igual a 5 y asi hacer que el codigo se ejecute correctamente
    

    if (a % 2 == 0)
        a++;     // aqui hay una condicion que dice que al igual que en la conjetura fuerte,
	            // al valor de entrada "a" ahora al ser este usado para la conjetura debil,
	           // si el valor de entrada es un numero par, se le incrementa en 1 para que sea impar

    for (int i = a; i <= b; i += 2) 
    {
        for (int n1 = 2; n1 <= i / 3; n1++)
        {
            for (int n2 = n1; n2 <= i / 2; n2++)
            {
                int n3 = i - n1 - n2;
                if (esPrimo(n1) && esPrimo(n2) && esPrimo(n3))
                    cout << i << " = " << n1 << " + " << n2 << " + " << n3 << endl; //estos bucles "anidados" son los encargados de buscar todas las posibles 
                   //combinaciones de 3 numeros que sumen un numero impar hasta llegar a el balor establecido "b"
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
	// esta función es utilizada para comprobar si los números "n1", "n2" y "n3" son primos antes de imprimirlos en la suma para que se cumpla la conjetura débil
}


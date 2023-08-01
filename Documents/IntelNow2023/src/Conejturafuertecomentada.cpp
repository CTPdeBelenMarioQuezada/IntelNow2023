#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int numero); //funcion para comprobar si el numero es primo o no

int main()
{
    int a, b; // variables de entrada que uno le da al codigo para que se ejecute,
	 //por ejemplo el valor de "a" siempre tiene que ser menor que el de "b" y "b" es el valor limite al que el codigo llega es  decir es el valor mas grande.
    do
    {
        cout << "Introduzca el valor de a y b: "; // aqui ya le indicamos al usuario que introduzca dos valores de entrada, uno de partida que es "a" y otro del limite que es "b"
        cin >> a >> b; //se guardan esos valores para luego realizar las operaciones y  imprimirlos en la pantalla
    } while (a >= b); //este bucle sirve para que el valor se evalue si es un valor true o false,
	 //l caso de que sea true el bucle se repite hasta revisar nuevamente si sigue siendo verdadera, 
	 //si lo es  le pide al usuario que introduzca otro numero, si es falsa significara que es un numero menor que "b"

    if (a % 2 != 0) 
        a++; //esta condicion ocurre si el valor de entrada dado para "a" es un numero impar 
		//    y lo que hace es que incrementa el valor de "a" en 1, para asegurarse que sea par siempre

    for (int i = a; i <= b; i += 2)// este bucle doble permite encontrar todas las combinaciones de dos numeros primos cuya suma sea igual a los numeros impares en el rango que existe entre "a" 
    {
        for (int n1 = 2; n1 <= i / 2; n1++)
        {
            int n2 = i - n1;
            if (esPrimo(n1) && esPrimo(n2))
                cout << i << " = " << n1 << " + " << n2 << endl; 
        }
    }
}

bool esPrimo(int numero)
{
    if (numero < 2)
        return false;

    for (int i = 3; i <= sqrt(numero); i+= 2) // se calcula la raiz cuadrada de "numero" 
	//y en base a eso podemos obtener una cantidad menor al numero dentro de la cual es valido revisar mediante a sus multiplos 
	// y en base a eso determinamos, si es primo o no
    {
        if (numero % i == 0) 
            return false;
            //aqui tenemos otra condicion, que sirve para verificar si el valor de "numero" es divisile por el entero i, 
		//y si si lo es devuelve una salida logica falsa, diciendo que el valor de "numero" no es primo, si no es divisible,
		//se sigue probando con otros valores de "i" probando con todas las posiles posibilidades hasta que se verifique con  ninguna es divisible
    }

    return true;
}
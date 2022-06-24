/*
Ejercicio 2: Escribe la siguiente expresión como expresión en C++:
("a" más "b") sobre ("c" más "d")
*/

#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d;
	double resultado = 0;
	
	cout << "\n\nEste programa realizara la expresion: (a+b)/(c+d)\n\n";
	cout << "Introduzca a: \n"; cin >> a;
	cout << "Introduzca b: \n"; cin >> b;
	cout << "Introduzca c: \n"; cin >> c;
	cout << "Intriduzca d: \n"; cin >> d;

	resultado = (a + b) / (c + d);

	cout << "El resultado es: " << resultado;

	return 0;
}
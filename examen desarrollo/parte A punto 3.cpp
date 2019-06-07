// punto A3

#include "pch.h"
#include <iostream>
using namespace std;


int factorial(int);

int main()
{
	int numerito = 0;
	cout << "Ingrese un numero: ";
	cin >> numerito;
	cout<< "El Factorial de "<<numerito<<" es: " << factorial(numerito);
	//std::cout << "Hello World!\n";
}

int factorial(int n)
{
	int contaNumeros = n;
	int resultado = 1;
	do
	{
		resultado = resultado * contaNumeros;
		contaNumeros = contaNumeros - 1;
	} while (contaNumeros != 0);
	return resultado;
}
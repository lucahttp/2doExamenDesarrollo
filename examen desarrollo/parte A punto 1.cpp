
//ejercicioa1

#include "pch.h"
#include <iostream>
using namespace std;

const int largoVectores = 5;
const int cantidadVectores = 3;


#define vector1 0
#define vector2 1
#define vector3 2

enum vectores
{

};


int main()
{
	int megaVector[cantidadVectores][largoVectores];

	for (int index = 0; index < cantidadVectores; index++)
	{

		for (int index2 = 0; index2 < largoVectores; index2++)
		{
			if (index == vector3)
			{

				if ((index2 % 2) != 0 || megaVector[index][index2] == 0)
				{
					megaVector[index][index2] = megaVector[vector1][index2];
				}
				else
				{
					megaVector[index][index2] = megaVector[vector2][index2];
				}
			}
			else
			{
				cout << "Ingrese un valor para el vector " << index + 1 << ": ";
				cin >> megaVector[index][index2];
			}

		}
	}
	for (int algo = 0; algo < largoVectores; algo++)
	{
		cout << megaVector[vector3][algo] << ",";
	}

	//std::cout << "Hello World!\n";
}


void pedirValores(void)
{
	cout << "Ingrese un numero para el vector";
}



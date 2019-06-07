
////////////////////////////////////////////////////----------------------------------//////////////////////////////



//ejercicioa2abc

#include "pch.h"
#include <iostream>

using namespace std;

const int cantidadPersonas = 3;
const int cantidadMaquinas = 3;


#define matrizY cantidadPersonas

#define matrizX cantidadMaquinas

#define unaMatriz megaVector


enum vectores
{

};





//veces = horas

//int buscarElMasVicio(int**, int, int);

int main()
{
	int megaVector[cantidadPersonas][cantidadMaquinas];

	//preguntar valores
	for (int index = 0; index < cantidadPersonas; index++)
	{
		for (int index2 = 0; index2 < cantidadMaquinas; index2++)
		{
			cout << "Ingrese la cantidad de horas uso la computadora " << index2 + 1 << " la persona " << index + 1 << " :";
			cin >> megaVector[index][index2];
		}
	}


	//el mas vicio//////////////////////////////////////////
	int elmasvicio = 0;

	int lashorasdelmasvicio = 0;
	for (int index3 = 0; index3 < cantidadPersonas; index3++)
	{
		int tamporalisis = 0;
		for (int index4 = 0; index4 < cantidadMaquinas; index4++)
		{
			tamporalisis = tamporalisis + megaVector[index3][index4];

			//cout << "Ingrese la cantidad de horas uso la computadora " << index2 + 1 << " la persona " << index + 1 << " :";
		}
		if (tamporalisis > lashorasdelmasvicio)
		{
			lashorasdelmasvicio = tamporalisis;

			elmasvicio = index3;
		}
	}

	cout << "el mas vicio es la persona numero " << elmasvicio + 1 << "." << endl;

	//std::cout << "Hello World!\n";





	//la pc mas usada//////////////////////////////////////////

	int lapcmasusada = 0;

	int lashorasdelapcmasusada = 0;
	for (int index3 = 0; index3 < cantidadMaquinas; index3++)
	{
		int tamporalisis = 0;
		for (int index4 = 0; index4 < cantidadPersonas; index4++)
		{
			tamporalisis = tamporalisis + megaVector[index3][index4];

			//cout << "Ingrese la cantidad de horas uso la computadora " << index2 + 1 << " la persona " << index + 1 << " :";
		}
		if (tamporalisis > lashorasdelapcmasusada)
		{
			lashorasdelapcmasusada = tamporalisis;

			lapcmasusada = index3;
		}
	}
	cout << "la pc mas usada fue la numero " << lapcmasusada + 1 << "." << endl;
	cout << endl;


	int personita = 0;
	cout << "ingrese el numero de persona del que quiere saber cuantos horas uso las pcs: ";
	cin >> personita;
	int tiempodepersonita=0;

	//////tomado del punto 2b

	for (int index4 = 0; index4 < cantidadMaquinas; index4++)
	{
		tiempodepersonita = tiempodepersonita + megaVector[personita][index4];

		//cout << "Ingrese la cantidad de horas uso la computadora " << index2 + 1 << " la persona " << index + 1 << " :";
	}
	cout << "el id de persona que ingresaste uso " << tiempodepersonita << " horas la pc";





}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



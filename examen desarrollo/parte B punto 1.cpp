////////////////////////////////////////////////////----------------------------------//////////////////////////////


//ejercicioB1

#include "pch.h"
#include <iostream>

using namespace std;



int main()
{
	//std::cout << "Hello World!\n";
}



struct Automovil
{
	string marca;//ford
	string modelo;//focus
	Gama gama;//media
	int anio;//2017
	int valorResidual;//360000
	int kmRecorridos;//80000
};

Automovil agregaAutos(string marca, string modelo, Gama gama, int anio, int valorResidual,int kmRecorridos)
{
	Automovil *nuevo_auto = new Automovil();
	nuevo_auto->marca = marca;
	nuevo_auto->modelo = modelo;
	nuevo_auto->gama = gama;
	nuevo_auto->anio = anio;
	nuevo_auto->valorResidual = valorResidual;
	nuevo_auto->kmRecorridos = kmRecorridos;
}


enum Gama {
	ALTA = 3, MEDIA = 2, BAJA = 1
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

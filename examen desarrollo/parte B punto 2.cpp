////////////////////////////////////////////////////----------------------------------//////////////////////////////


//ejercicioB12

#include "pch.h"
#include <iostream>

using namespace std;



int main()
{
	//std::cout << "Hello World!\n";
}


//////////////////////////////////////////////////////////////////////
// automovil


enum Gama {
	ALTA = 3, MEDIA = 2, BAJA = 1
};

struct Automovil
{
	string marca;//ford
	string modelo;//focus
	Gama gama;//media
	int anio;//2017
	int valorResidual;//360000
	int kmRecorridos;//80000
};

Automovil agregaAutos(string marca, string modelo, Gama gama, int anio, int valorResidual, int kmRecorridos)
{
	Automovil *nuevo_auto = new Automovil();
	nuevo_auto->marca = marca;
	nuevo_auto->modelo = modelo;
	nuevo_auto->gama = gama;
	nuevo_auto->anio = anio;
	nuevo_auto->valorResidual = valorResidual;
	nuevo_auto->kmRecorridos = kmRecorridos;
	return *nuevo_auto;
}



//////////////////////////////////////////////////////////////////////
//factura

enum TipoFactura {
	C = 3, B = 2, A = 1
};
enum MedioDePago {
	parcialmenteFinanciado = 3, contado = 2, financiado = 1
};

struct Factura
{
	TipoFactura tipoF;//A
	float importe;//80000
	string autox;//ford focus
	int fecha;//DDMMAAAA
	string nombreComprador;//juan
	MedioDePago pago;//contado
};

Factura agregaFacturas(TipoFactura tipoF, float importe, string autox, int fecha, string nombreComprador, MedioDePago pago)
{
	Factura *nueva_factura = new Factura();
	nueva_factura->tipoF = tipoF;
	nueva_factura->importe = importe;
	nueva_factura->autox = autox;
	nueva_factura->fecha = fecha;
	nueva_factura->nombreComprador = nombreComprador;
	nueva_factura->pago = pago;
	return *nueva_factura;
}





//////////////////////////////////////////////////////////////////////////
// punto B3


// libro diario
// ingreso y egreso de dinero diario


void funcionVentaDiaADia(void)
{

}

// ciclo economico
// ingreso y egreso de dinero anual





//////////////////////////////////////////////////////////////////////////


















////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


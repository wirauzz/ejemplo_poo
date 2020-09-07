#include "Transacciones.h"



Transacciones::Transacciones(long Monto,int Tipo,Fecha F)
{
	this->Monto = Monto;
	this->Tipo = Tipo;
	this->Fech = F;
}
void Transacciones::Mostrar()
{
	cout << "Fecha de la transaccion: ";
	Fech.Mostrar();
	cout << "Tipo de la transaccion: ";
	switch (Tipo)
	{
		case 1:
			cout << "Deposito" << endl;
			cout << "Monto depositado: " << Monto << endl;
		break;
		case 2:
			cout << "Retiro" << endl;
			cout << "Monto extraido: " << Monto << endl;
		break;
	}
}
Transacciones::~Transacciones()
{
}

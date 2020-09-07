#include "C_Transacciones.h"



C_Transacciones::C_Transacciones()
{
	CantMax = 50;
	Cont = 0;
	Historial = new Transacciones*[CantMax];
}
void C_Transacciones::Deposito()
{
	long Monto;
	Fecha Fech;
	if (Cont < CantMax)
	{
		cout << "\t DEPOSITO" << endl;
		cout << "Ingresar la fecha de la operacion" << endl;
		Fech.Registrar();
		cout << "Ingrese el monto: ";
		cin >> Monto;
		Saldo = Saldo + Monto;
		Historial[Cont] = new Transacciones(Monto, 1, Fech);
		Cont++;
	}
	else
	{
		cout << "Historial Lleno" << endl;
	}
}
void C_Transacciones::Retiro()
{
	long Monto;
	Fecha Fech;
	if (Cont < CantMax)
	{
		cout << "\t RETIRO" << endl;
		cout << "Ingrese la fecha de la operacion" << endl;
		Fech.Registrar();
		cout << "Ingrese el monto a retirar: ";
		cin >> Monto;
		if (Monto < Saldo)
		{
			Saldo = Saldo - Monto;
			Historial[Cont] = new Transacciones(Monto, 2, Fech);
			Cont++;
		}
		else
		{
			cout << "Fondos insuficientes :v" << endl;
		}

	}
	else
	{
		cout << "Historial Lleno" << endl;
	}
}
void C_Transacciones::Mostrar()
{
	Historial[Cont]->Mostrar();
}

C_Transacciones::~C_Transacciones()
{
	for (int i = 0;i < Cont;i++)
	{
		delete Historial[Cont];
	}
	delete[] Historial;
}

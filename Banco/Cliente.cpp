#include "Cliente.h"
#include "C_Ahorro.h"
#include "C_Corriente.h"
#include "C_dpf.h"


Cliente::Cliente()
{
	Cont = 0;
	CantMax = 10;
	Cuentas = new Cuenta*[CantMax];
}
void Cliente::Mostrar()
{
	cout << "Nombre del Cliente: " << Nombre<< endl;
	cout << "CI del cliente: " << Nombre<< endl;
	cout << "Cuentas activas: " << Cont<<endl;
	for (int i = 0;i < Cont;i++)
	{
		Cuentas[i]->Mostrar();
	}
	
}
void Cliente::Registrar()
{
	cout << "Ingrese el nombre del cliente: ";
	cin >> Nombre;
	cout << "Ingrese el CI del cliente: ";
	cin >> CI;
}
void Cliente::Agregar()
{
	int Op;
	if (Cont < CantMax)
	{
		cout << "\t TIPO DE CUENTA" << endl;
		cout << "1. Cuenta de ahorro" << endl;
		cout << "2. Cuenta corriente" << endl;
		cout << "3. Cuenta dpf" << endl;
		cout << "Ingrese su opcion: ";
		cin >> Op;
		switch (Op)
		{
			case 1:
				Cuentas[Cont] = new C_Ahorro;
				Cuentas[Cont]->Registrar();
				Cont++;
			break;
			case 2:
				Cuentas[Cont] = new C_Corriente;
				Cuentas[Cont]->Registrar();
				Cont++;
				break;
			case 3:
				Cuentas[Cont] = new C_dpf;
				Cuentas[Cont]->Registrar();
				Cont++;
				break;
		}
	}
}
void Cliente::Opcion()
{
	int IDaux;
	cout << "Ingrese el ID de la cuenta que quiere utilizar: ";
	cin >> IDaux;
	for (int i = 0;i < Cont;i++)
	{
		if (IDaux == Cuentas[i]->getID())
		{
			Cuentas[i]->Opcion();
		}
	}
}
void Cliente::Menu()
{
	int Op;
	do
	{
		cout << "\ BIENVENIDO" << endl;
		cout << "1. Acceder a una cuenta" << endl;
		cout << "2. Aniadir cuenta" << endl;
		cout << "3. Mostrar Cuentas" << endl;
		cout << "0. SALIR" << endl;
		cout << "Ingrese su opcion--> ";
		cin >> Op;
		system("cls");
		switch (Op)
		{
			case 1:
				Opcion();
				break;
			break;
			case 2:
				Agregar();
				break;
			case 3:
				Mostrar();
				break;
		}
		system("pause");
		system("cls");
	} while (Op != 0);
}
long Cliente::getCI()
{
	return CI;
}
Cliente::~Cliente()
{
}

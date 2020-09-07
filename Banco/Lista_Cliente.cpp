#include "Lista_Cliente.h"



Lista_Cliente::Lista_Cliente()
{
	Cont = 0;
	CanMax = 50;
	Lista = new Cliente*[CanMax];
}
void Lista_Cliente::Accesar()
{
	long CIaux;
	cout << "Ingrese el CI de su cuenta: ";
	cin >> CIaux;
	for (int i = 0;i < Cont;i++)
	{
		if (CIaux = Lista[i]->getCI())
		{
			Lista[i]->Menu();
		}
	}
}
void Lista_Cliente::Mostrar()
{
	for (int i = 0;i < Cont;i++)
	{
		cout << "\t INFORMACION CLIENTE" << endl;
		Lista[i]->Mostrar();
	}
}
void Lista_Cliente::Registrar()
{
	if (Cont < CanMax)
	{

		Lista[Cont] = new Cliente;
		Lista[Cont]->Registrar();
		Cont++;
	}
	else
	{
		cout << "Banco lleno" << endl;
	}
}

Lista_Cliente::~Lista_Cliente()
{
	for (int i = 0;i < Cont;i++)
	{
		delete Lista[i];
	}
	delete[]Lista;
}

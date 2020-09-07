#include "Cuenta.h"



Cuenta::Cuenta()
{
}
void Cuenta::Mostrar()
{
	cout << "ID de la cuenta: " << ID << endl;
	cout << "Saldo de la cuenta: " << Saldo << endl;
}
void Cuenta::Registrar()
{
	cout << "Ingrese el numero de la cuenta: ";
	cin >> ID;
	cout << "Ingrese Saldo: ";
	cin >> Saldo;
}
long Cuenta::getID()
{
	return ID;
}

Cuenta::~Cuenta()
{
}

#include "C_Corriente.h"



C_Corriente::C_Corriente()
{
}
void C_Corriente::Actualizar()
{
	if (Saldo > I_Anual)
	{
		cout << "Interes anual: " << I_Anual << endl;
		Saldo = Saldo - I_Anual;
		Cuenta::Mostrar();
	}
}
void C_Corriente::Mostrar()
{
	cout << "\t CUENTA CORRIENTE" << endl;
	Cuenta::Mostrar();
	cout << "Interes anual: " << I_Anual << endl;
}
void C_Corriente::Registrar()
{
	cout << "\t CUENTA CORRIENTE" << endl;
	Cuenta::Registrar();
	cout << "Ingrese el interes anual de la cuenta: ";
	cin >> I_Anual;
}
void C_Corriente::Opcion()
{

	int Op;
	cout << "Ingrese la opcion (1) Retiro (2) Deposito: ";
	cin >> Op;
	switch (Op)
	{
		case 1:
			C_Transacciones::Deposito();
		break;
		case 2:
			C_Transacciones::Retiro();
			break;
	}
}

C_Corriente::~C_Corriente()
{
}

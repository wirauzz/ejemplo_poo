#include "C_Ahorro.h"



C_Ahorro::C_Ahorro()
{
}
void C_Ahorro::Opcion()
{
	int Tipo;
	cout << "Ingresar Tipo de transaccion: ";
	cin >> Tipo;
	switch (Tipo)
	{
		case 1:
			C_Transacciones::Deposito();
		break;
		case 2:
			C_Transacciones::Retiro();
		break;
	}
}
void C_Ahorro::Registrar()
{
	cout << "CUENTA AHORRO" << endl;
	Cuenta::Registrar();
	cout << "Ingrese el Costo mensual: ";
	cin >> CostoM;
}
void C_Ahorro::Mostrar()
{
	cout << "\t CUENTA DE AHORRO" << endl;
	Cuenta::Mostrar();
	cout << "Costo Mensual: " << CostoM << endl;
}
void C_Ahorro::Actualizar()
{
	if (Saldo > CostoM)
	{
		cout << "Costo Mensual: " << CostoM << endl;
		Saldo = Saldo - CostoM;
		Cuenta::Mostrar();
	}
}
C_Ahorro::~C_Ahorro()
{
}

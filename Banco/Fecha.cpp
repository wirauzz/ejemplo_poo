#include "Fecha.h"



Fecha::Fecha()
{
}
void Fecha::Mostrar()
{
	cout << Dia << "/" << Mes << "/" << Anio << endl;
}
void Fecha::Registrar()
{
	cout << "Ingrese el dia: ";
	cin >> Dia;
	cout << "Ingrese el Mes: ";
	cin >> Mes;
	cout << "Ingrese el A�o� ";
	cin >> Anio;
}
Fecha::~Fecha()
{
}

#include "C_dpf.h"



C_dpf::C_dpf()
{
}
void C_dpf::Actualizar()
{
	Saldo = Saldo - Int_An;
}
void C_dpf::Registrar()
{
	cout << "\t CUENTA DPF" << endl;
	Cuenta::Registrar();
	cout << "Fecha inicial: " << endl;
	FechaI.Registrar();
	cout << "Fecha Final: " << endl;
	FechaF.Registrar();
	cout << "Interes anual: ";
	cin>>Int_An;
}
void C_dpf::Mostrar()
{
	cout << "\t CUENTA DPF" << endl;
	Cuenta::Mostrar();
	cout << "Fecha inicial: ";
	FechaI.Mostrar();
	cout << "Fecha final: ";
	FechaF.Mostrar();
	cout << "Interes anual: " << Int_An << endl ;
}
void C_dpf::Opcion()
{
	Actualizar();
}
C_dpf::~C_dpf()
{
}

#pragma once
#include "Cuenta.h"
#include "Transacciones.h"
class C_Transacciones :	public Cuenta
{
protected:
	Transacciones** Historial;
	int Cont, CantMax;
public:
	C_Transacciones();
	void Deposito();
	void Retiro();
	void Mostrar();
	~C_Transacciones();
};


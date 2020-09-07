#pragma once
#include "Cuenta.h"
#include "Fecha.h"
class C_dpf :public Cuenta
{
private:
	Fecha FechaI, FechaF;
	long Int_An;
public:
	C_dpf();
	void Registrar();
	void Mostrar();
	void Actualizar();
	void Opcion();
	~C_dpf();
};


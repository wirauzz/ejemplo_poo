#pragma once
#include "C_Transacciones.h"
class C_Corriente :public C_Transacciones
{
private:
	long I_Anual;
public:
	C_Corriente();
	void Mostrar();
	void Registrar();
	void Opcion();
	void Actualizar();
	~C_Corriente();
};


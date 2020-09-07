#pragma once
#include "C_Transacciones.h"
class C_Ahorro : public C_Transacciones
{
private:
	long CostoM;
public:
	C_Ahorro();
	void Opcion();
	void Registrar();
	void Mostrar();
	void Actualizar();
	~C_Ahorro();
};


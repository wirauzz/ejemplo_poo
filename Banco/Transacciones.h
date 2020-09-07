#pragma once
#include <iostream>
#include <string>
#include "Fecha.h"
class Transacciones
{
private:
	Fecha Fech;
	long Monto;
	int Tipo;
public:
	Transacciones(long Monto,int Tipo,Fecha F);
	void Mostrar();
	~Transacciones();
};


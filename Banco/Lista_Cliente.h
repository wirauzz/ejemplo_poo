#pragma once
#include "Cliente.h"
class Lista_Cliente
{
private:
	Cliente * * Lista;
	int Cont, CanMax;
public:
	Lista_Cliente();
	void Registrar();
	void Mostrar();
	void Accesar();
	~Lista_Cliente();
};


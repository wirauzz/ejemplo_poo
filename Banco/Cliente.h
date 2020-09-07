#pragma once
#include "Cuenta.h"
class Cliente
{
private: 
	Cuenta** Cuentas;
	int Cont, CantMax;
	string Nombre;
	long CI;
public:
	Cliente();
	void Registrar();
	void Mostrar();
	void Agregar();
	void Opcion();
	long getCI();
	void Menu();
	~Cliente();
};


#pragma once
#include <iostream>
#include <string>
using namespace std;
class Cuenta
{
protected:
	long ID, Saldo;
public:
	Cuenta();
	virtual void Opcion()=0;
	virtual void Actualizar()=0;
	virtual void Registrar();
	virtual void Mostrar();
	long getID();
	~Cuenta();
};


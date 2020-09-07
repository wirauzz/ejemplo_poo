#include "Lista_Cliente.h"



int main()
{
	Lista_Cliente Lista;
	for (int i = 0;i < 3 ;
		i++)
	{
		Lista.Registrar();
	}
	Lista.Mostrar();
	Lista.Accesar();

	system("pause");
	return 0;
}
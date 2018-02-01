#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int arreglo[100];

void crearArreglo()
{
	srand((int)time(0));
	for(int i = 0; i < 100; i++)
	{
		arreglo[i] = (rand() % 300) + 1;
		cout << arreglo[i] << " ";
	}
}

bool comprobarOrden()
{
	for(int i = 0; i < 99; i++)
	{
		int a = arreglo[i], b = arreglo[i + 1];
		if(a > b)
		{
			return false;
		}
	}
	for(int i = 0; i < 100; i++)
	{
		cout << arreglo[i] << " ";
	}
	cout << "\nEl arreglo ha sido ordenado!!!!" << endl;
	return true;
}

void ordenarArreglo()
{
	bool comprobar = comprobarOrden();
	while(comprobar == false)
	{
		for(int i = 0; i <99; i++)
		{
			int a = arreglo[i], b = arreglo[i + 1];
			if(a > b)
			{
				arreglo[i] = b;
				arreglo[i + 1] = a;
			}
		}
		if(comprobarOrden() == true)
			break;
	}
}




int main()
{
    crearArreglo();
    cout << endl << endl << endl;

    ordenarArreglo();

}

#include <iostream>
#include "Vector.h"
#define MAX 10

using namespace std;

int main()
{
	int v[MAX], n, op;
	Vector vect1;
	cout << "Ingrese el tamaño del vector" << endl;
	do {
		cin >> n;
	} while (n <= 0);
	vect1.set_n(n); //Para cambiar el valor del atributo del objeto
	do {
		cout << "-----       M E N U        -----" << endl;
		cout << "|1.- Cargar Vector.            |" << endl;
		cout << "|2.- Mostrar Vector.           |" << endl;
		cout << "|3.- Ordenar Vector.           |" << endl;
		cout << "|0.- Salir                     |" << endl;
		cout << "--------------------------------" << endl;
		cout << " Elija una opcion" << endl;
		cin >> op;
		switch (op){
		case 1: vect1.cargarVector(v, n);
			break;
		case 2: vect1.mostrarVector(v, n);
			break;
		case 3: vect1.ordenarVector(v, n);
			break;
		default:
			cout << "Orden ingresada incorrecta" << endl;
			break;
		}
	} while (op != 0);
}


#include <iostream>
#include "Pila.h"
using namespace std;
int main(){
	int elem;
	Pila pilita;
	cout << "ingresa el valor de pila:"; cin >> elem;
	if (pilita.push(elem)) {
		cout << "Valor ingresado\n";
	}
}



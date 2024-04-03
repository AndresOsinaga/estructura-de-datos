#include "Pila.h"
#include <iostream>
using namespace std;

Pila::Pila() {
	tope = -1;
}
bool Pila::push(int element) {
	if (tope == MAX - 1) {
		cout << "Pila llena\n";
		return false;
	}
	else {
		pila[tope++] = element;
		return true;
	}
}
bool Pila::pop() {
	if (tope == -1) {
		cout << "Pila vacia";
		return false;
	}
	else {
		tope--;
		return true;
	}

}

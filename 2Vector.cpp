#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector() {
	
}
Vector::~Vector() {

}
void Vector ::set_n(int num) {
	n = num; //Damos valor al atributo n
}
int Vector ::get_n() {
	return n;
}
void Vector ::cargar(int num, int A[]) {
	//Los arreglos funcionan por referencia no utilizan "&"
	for (int i = 0; i < num; i++) {
		cout << "A[" << i << "]="; 
		cin >> A[i];
	}
}
void Vector ::mostrar(int num, int A[]) {
	for (int i = 0; i < num; i++) {
		cout << "A[" << i << "]=" << A[i] << endl;
	}
}
void Vector ::ordenar(int num, int A[]) {
	int mn;
	for (int i = 0; i<(num-1); i++)  {
		for (int k = i; k < num; k++) {
			if (A[i] > A[k]) {
				mn = A[i];
				A[i] = A[k];
				A[k] = mn;
			}
		}
	}
}
void Vector::promedio(int num, int A[]) {
	float sum=0;
	for (int i = 0; i < num; i++) {
		sum += A[i];
	}
	cout << "Pormedio=" << sum / num << endl;
}

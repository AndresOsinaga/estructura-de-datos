#pragma once
#define MAX 100
class Pila{
private:
	int pila[MAX];
	int tope;
public:
	Pila();
	bool push(int element);
	bool pop();
	//bool pilavacia();
};


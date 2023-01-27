#pragma once
#include"Chasis.h"
#include"Llanta.h"
using namespace std;
using namespace System;
class Auto
{
public:
	Auto(int px, int py);
	~Auto();
	void borrar();
	void mover();
	void dibujar();
	int getX();
private:
	int y;
	float x, dx;
	Chasis* ObjChasis;
	Llanta* ObjLlanta;
	Llanta** arreglo;
};//fin de la definicion

Auto::Auto(int px, int py) {
	this->x = px;
	this->y = py;
	this->dx = 0.1 + (float)rand() / RAND_MAX;
	//Crear chasis
	ObjChasis = new Chasis(this->x, this->y);
	//crear las llantas
	arreglo = new Llanta * [4];
	arreglo[0] = new Llanta(x, y - 1);//para la llanta 1
	arreglo[1] = new Llanta(x + 2, y - 1);//para la llanta 2
	arreglo[2] = new Llanta(x, y + 1);//para la llanta 3
	arreglo[3] = new Llanta(x + 2, y + 1);//para la llanta 4

}

Auto::~Auto() {}
void Auto::borrar() {
	Console::SetCursorPosition(x, y - 1); cout << "     ";
	Console::SetCursorPosition(x, y);   cout << "     ";
	Console::SetCursorPosition(x, y + 1); cout << "     ";

}
void Auto::mover() {
	x += dx;
	//para las llantas
	arreglo[0]->setX(x);
	arreglo[1]->setX(x + 2);
	arreglo[2]->setX(x);
	arreglo[3]->setX(x + 2);
	//para el chasis
	ObjChasis->setX(x);
}
void Auto::dibujar() {
	ObjChasis->dibujar();
	for (int i = 0; i < 4; i++)arreglo[i]->dibujar();
}
int Auto::getX() {
	return x;
}

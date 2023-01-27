#pragma once
#include<conio.h>
#include<iostream>
using namespace std;
using namespace System;
class Llanta {
public:
	Llanta();
	Llanta(int px, int py);
	~Llanta();
	void dibujar();
	void setX(int valor);
private:
	int x, y;
};

//IMPLEMENTACION
Llanta::Llanta() {
	this->x = 10;
	this->y = 10;
}
Llanta::Llanta(int px, int py) {
	this->x = px;
	this->y = py;
}

Llanta::~Llanta() {}
void Llanta::dibujar() {
	Console::SetCursorPosition(x, y); cout << (char)220;
}
void Llanta::setX(int valor) {
	this->x = valor;
}






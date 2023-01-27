#pragma once
#include<conio.h>
#include<iostream>
using namespace System;
using namespace std;
class Chasis {
public:
	Chasis();
	Chasis(int px, int py);
	~Chasis();
	//metodos
	void dibujar();
	void setX(int valor);
private:
	int x, y;
	int tam;
};//fin de la definicion

//IMPLEMENTACION
Chasis::Chasis() {
	this->x = 10;
	this->y = 10;
}
Chasis::Chasis(int px, int py) {

	this->x = px;
	this->y = py;
}
Chasis::~Chasis() {}
void Chasis::dibujar() {
	Console::ForegroundColor == ConsoleColor::DarkBlue;
	Console::SetCursorPosition(x, y); cout << (char)178 << (char)178 << (char)178 << (char)178 << (char)178;
	Console::ForegroundColor == ConsoleColor::DarkBlue;
	Console::SetCursorPosition(x + 1, y); cout << (char)178;
}
void Chasis::setX(int valor) {
	this->x = valor;
}

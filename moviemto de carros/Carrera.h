#pragma once
#include"Auto.h"
class Carrera {
public:
	Carrera();
	~Carrera();
	//metodos
	void iniciar_Carrera();
	void dibujar_Meta();
private:
	Auto** arreglo;//autos a participar
	Auto* objAuto;
	int meta;
};//fin de la definicion

//implementa la clase 

Carrera::Carrera() {
	//instancia el arreglo para los autos
	arreglo = new Auto * [3];
	float posx = 1; //para la posicion del auto
	int posy = 1;
	meta = 70;
	//instancia los autos para la carrera
	for (int i = 0; i < 3; i++)
	{
		objAuto = new Auto(posx, posy);
		arreglo[i] = objAuto;
		posy += 6; //para la posicion del siguiente auto
	}
}

Carrera::~Carrera() {}
void Carrera::iniciar_Carrera() {
	//muestra los autos
	arreglo[0]->dibujar();
	arreglo[1]->dibujar();
	arreglo[2]->dibujar();
	int i = 0;
	dibujar_Meta();
	while (true) {
		arreglo[i]->borrar();
		arreglo[i]->mover();
		arreglo[i]->dibujar();
		//
		i++;
		if (i > 2) i = 0;
		if (arreglo[i]->getX() > meta) {
			Console::SetCursorPosition(30, 25); cout << "GANA AUTO" << i + 1;
			Console::SetCursorPosition(30, 26); cout << "PRESIONE LA TECLA PARA CONTINUAR ..";
			system("pause>0");
			break;//fin del ciclo
		}
		_sleep(100);
	}
}
void Carrera::dibujar_Meta() {
	for (int y = 0; y < 40; y++)
	{
		Console::SetCursorPosition(meta, y); cout << (char)219;
	}
}

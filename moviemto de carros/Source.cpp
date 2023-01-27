#include<conio.h>
#include<iostream>
#include"Carrera.h"

int main() {
	srand(time(nullptr));
	Console::SetWindowSize(80, 40);

	Console::CursorVisible = false;
	Carrera* ObjCarrera;
	ObjCarrera = new Carrera();
	ObjCarrera->iniciar_Carrera();

	system("pause>0");
	return 0;
}
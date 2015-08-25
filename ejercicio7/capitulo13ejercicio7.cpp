//============================================================================
// Name        : capitulo13-ej7.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "GestorLibreria.h"

GestorLibreria gestor1;

char opt;

int main() {
	cout << "Bienvenido a la libreria" << endl;


	while(true) {
		cout << "Que quiere hacer? \n a) Introducir libro \n b) Eliminar libro \n c) Buscar libro \n d) Mostrar todo \n e) salir "	<< endl;
		cin >> opt;

		switch(opt) {

			case 'a':
				gestor1.aniadirLibro();
			break;

			case 'b':
				gestor1.eliminarLibro();
			break;


			case 'c':
				gestor1.buscarLibro();
				break;

			case 'd': //Test
				gestor1.mostrarTodo();
				break;


			default:
					return 0;

}

	}
return 0;
}

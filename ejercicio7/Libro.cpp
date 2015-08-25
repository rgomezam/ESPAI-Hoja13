/*
 * Libro.cpp
 *
 *  Created on: Aug 18, 2015
 *      Author: raquel
 */

#include "Libro.h"



Libro::Libro(string titulo, int codigo) {

	this->titulo=titulo;
	this-> codigo=codigo;
	this->stock=1;

	cout << "Creando libro: " << titulo << " , cod: " << codigo << endl;

}

Libro::Libro(Libro& unLibro){
	cout << "llamando al constructor de copias" << endl;

	titulo = unLibro.getTitulo();
	codigo=unLibro.getCodigo();

}


Libro::~Libro() {
	cout << "Descatalogando libro..." << endl;
}

void Libro::setStock(int diff) {
	stock+=diff;
	cout <<"El nuevo stock es: " << stock << endl;
}

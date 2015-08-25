/*
 * GestorLibreria.h
 *
 *  Created on: Aug 25, 2015
 *      Author: raquel
 */

#ifndef GESTORLIBRERIA_H_
#define GESTORLIBRERIA_H_
#include "Libro.h"

class GestorLibreria {
public:
	GestorLibreria();
	virtual ~GestorLibreria();
	void aniadirLibro();
	void eliminarLibro();
	void buscarLibro();
	void mostrarTodo();

private:
	Libro *libreria[100];
	int codCounter;



};

#endif /* GESTORLIBRERIA_H_ */

/*
 * Libro.h
 *
 *  Created on: Aug 18, 2015
 *      Author: raquel
 */

#ifndef LIBRO_H_
#define LIBRO_H_

#include <iostream>
using namespace std;

class Libro {
public:
	Libro(string titulo,int codigo);
	Libro(Libro&);
	virtual ~Libro();
	int getStock(){return stock;}
	int getCodigo(){return codigo;}
	string getTitulo(){return titulo;}
	void setStock(int);



private:
	//string titulo[10]; //Hacemos que el titulo tenga hasta 10 palabras

	string titulo;
	int codigo;
	int stock;

};

#endif /* LIBRO_H_ */

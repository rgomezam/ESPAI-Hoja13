/*
 * GestorLibreria.cpp
 *
 *  Created on: Aug 25, 2015
 *      Author: raquel
 */

#include "GestorLibreria.h"
#include <iostream>
using namespace std;
//#include "Libro.h"

GestorLibreria::GestorLibreria() {
	//Inicializamos los punteros a cero
	for (int i = 0; i < 100; i++) {
		libreria[i] = NULL;
	}
	//Y los codigos a 1:
	this->codCounter = 1;
}

GestorLibreria::~GestorLibreria() {
	cout << "Eliminando libreria" << endl;
}

void GestorLibreria::aniadirLibro() {
	string nombre1;

	cout
			<< "Introduzca el titulo del libro a introducir (todo junto y en minusculas)"
			<< endl;
	cin >> nombre1;
	cout << "El codigo del libro es: " << codCounter << endl;

	for (int i = 0; i < 100; i++) {
		if (libreria[i] == NULL) {
			libreria[i] = new Libro(nombre1, codCounter);
			break;
		}
	}
	codCounter++;
}

void GestorLibreria::eliminarLibro() {
	char opt2;
	int codigo2;
	string nombre2;

	cout << "Quiere buscar el libro por codigo o por titulo? intorduzca c o t"
			<< endl;
	cin >> opt2;
	switch (opt2) {
	case 'c':
		cout << "Introduzca el codigo del libro" << endl;
		cin >> codigo2;
		cout << "codigo: " << codigo2 << endl;
		for (int i = 0; i < 100; i++) {
			if (libreria[i] != NULL && libreria[i]->getCodigo() == codigo2) {
				delete libreria[i];
				libreria[i] = NULL;
			}
		}
		break;

	case 't':
		cout << "Introduzca el titulo del libro (junto y en minusculas)"
				<< endl;
		cin >> nombre2;
		cout << nombre2 << endl;
		for (int i = 0; i < 100; i++) {
			if (libreria[i] != NULL && libreria[i]->getTitulo() == nombre2) {
				delete libreria[i];
				libreria[i] = NULL;
				break;
			}
		}
		break;
	}
}

void GestorLibreria::buscarLibro() {
	char opt2, opt3;
	int codigo2, ampliacion;
	string nombre2;

	cout
			<< "Buscar libro: Quiere buscar el libro por codigo o por titulo? intorduzca c o t"
			<< endl;
	cin >> opt2;

	switch (opt2) {
	case 'c':
		cout << "Introduzca el codigo del libro" << endl;
		cin >> codigo2;

		for (int i = 0; i < 100; i++) {
			if (libreria[i] != NULL && libreria[i]->getCodigo() == codigo2) {
				cout
						<< "Libro encontrado. Quiere vender o ampliar el stock? Pulse v o a"
						<< endl;
				cin >> opt3;
				switch (opt3) {
				case 'v':
					cout << "Vendiendo..." << endl;
					libreria[i]->setStock(-1);
					break;
				case 'a':
					cout << "Cuantos quiere añadir? " << endl;
					cin >> ampliacion;
					libreria[i]->setStock(ampliacion);
					break;
				}
				break;
			}
		}
		break;

	case 't':
		cout << "Introduzca el titulo del libro (junto y en minusculas)"<< endl;
		cin >> nombre2;

		for (int i = 0; i < 100; i++) {
			if (libreria[i] != NULL && libreria[i]->getTitulo() == nombre2) {
				cout << "Libro encontrado. Quiere vender o ampliar el stock? Pulse v o a" << endl;
				cin >> opt3;

				switch (opt3) {
				case 'v':
					cout << "Vendiendo..." << endl;
					libreria[i]->setStock(-1);
					break;
				case 'a':
					cout << "Cuantos quiere añadir? " << endl;
					cin >> ampliacion;
					libreria[i]->setStock(ampliacion);
					break;
				}
				break;
			}
		}
		break;

	default:
		return;
	}
}

void GestorLibreria::mostrarTodo() {

	for (int n = 0; n < 100; n++) {
		if (libreria[n] != NULL) {
			cout << libreria[n]->getCodigo() << ": " << libreria[n]->getTitulo()
					<< " (stock: " << libreria[n]->getStock() << ")" << endl;
			continue;
		}
	}
}

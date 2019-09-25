//
// Created by Rafael Jiménez  on 2019-09-24.
//

#ifndef EJERCICIOLISTALIBROS_LISTALIBROS_H
#define EJERCICIOLISTALIBROS_LISTALIBROS_H


#include <ostream>
#include "Nodo.h"

class ListaLibros {
	Nodo *primero;
	Nodo *actual;

public:
	ListaLibros();

	virtual ~ListaLibros();

	void insertarInicio(const Libro& _profesor);
	void insertarFinal(const Libro& _profesor);
	bool eliminarInicio();
	bool eliminarFinal();
	bool encontrado(int);
	Libro obtenerLibro(int);
	int totalNodos();
	bool listaVacia();

	Nodo *getPrimero() const;

	void setPrimero(Nodo *primero);

	Nodo *getActual() const;

	void setActual(Nodo *actual);

	std::string toString();
};


#endif //EJERCICIOLISTALIBROS_LISTALIBROS_H
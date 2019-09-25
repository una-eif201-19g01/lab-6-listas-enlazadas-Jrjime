//
// Created by Rafael Jiménez  on 2019-09-24.
//

#ifndef EJERCICIOLISTALIBROS_NODO_H
#define EJERCICIOLISTALIBROS_NODO_H


#include <ostream>
#include "Libro.h"

class Nodo {
	Libro libro;
	Nodo *siguiente;

public:
	Nodo();

	Nodo(const Libro &libro, Nodo *siguiente);

	virtual ~Nodo();

	const Libro &getLibro() const;

	void setProfesor(const Libro &libro);

	Nodo *getSiguiente() const;

	void setSiguiente(Nodo *_siguiente);

	std::string toString();

};


#endif //EJERCICIOLISTALIBROS_NODO_H

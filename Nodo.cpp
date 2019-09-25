//
// Created by Rafael Jiménez  on 2019-09-24.
//

#include "Nodo.h"

Nodo::Nodo() {}

Nodo::Nodo(const Libro &libro, Nodo *siguiente) : libro(libro), siguiente(siguiente) {}

Nodo::~Nodo() {

}

const Libro &Nodo::getLibro() const {
	return libro;
}

void Nodo::setProfesor(const Libro &libro) {
	Nodo::libro = libro;
}

Nodo *Nodo::getSiguiente() const {
	return siguiente;
}

void Nodo::setSiguiente(Nodo *_siguiente) {
	Nodo::siguiente = _siguiente;
}

std::string Nodo::toString() {
	return libro.toString();
}
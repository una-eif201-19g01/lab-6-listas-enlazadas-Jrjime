//
// Created by Rafael Jiménez  on 2019-09-24.
//

#include <sstream>
#include "ListaLibros.h"

ListaLibros::ListaLibros() {
	primero = nullptr;
	actual = nullptr;
}

ListaLibros::~ListaLibros() {
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}

void ListaLibros::insertarInicio(const Libro& _profesor) {
	actual = new Nodo(_profesor, nullptr);
	if (primero == nullptr) {
		primero = actual;
	}
	else {
		actual->setSiguiente(primero);
		primero = actual;
	}
}

void ListaLibros::insertarFinal(const Libro& _profesor) {
	actual = primero;
	if (primero == nullptr) {
		primero = new Nodo(_profesor, nullptr);
	}
	else {
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new Nodo(_profesor, nullptr));
	}
}

bool ListaLibros::eliminarInicio() {
	if (primero == nullptr) {
		return false;
	}
	else {
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
		return true;
	}
}

bool ListaLibros::eliminarFinal()
{
	actual = primero;
	if (primero == nullptr) {
		return false;
	}
	else {
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		delete actual;
		return true;
	}
}

bool ListaLibros::encontrado(int id)
{
	actual = primero;
	if (primero->getLibro().getId() == id ) {
		return true;
	}
	else
	{
		while (actual->getSiguiente()->getLibro().getId() != id) {
			actual = actual->getSiguiente();
		}
		return true;
	}

	return false;
}

Libro ListaLibros::obtenerLibro(int id)
{
	actual = primero;
	if (primero->getLibro().getId() == id) {
		return primero->getLibro();
	}
	else
	{
		while (actual->getSiguiente()->getLibro().getId() != id) {
			actual = actual->getSiguiente();
		}
		return actual->getSiguiente()->getLibro();
	}

	return primero->getLibro(); //Provisional
}



int ListaLibros::totalNodos() {
	int totalNodos = 0;
	actual = primero;

	while (actual != nullptr) {
		totalNodos++;
		actual = actual->getSiguiente();
	}

	return totalNodos;
}

bool ListaLibros::listaVacia() {
	return primero == nullptr;
}

std::string ListaLibros::toString() {
	std::string resultado;
	actual = primero;

	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}

	return resultado;
}

Nodo *ListaLibros::getPrimero() const {
	return primero;
}

void ListaLibros::setPrimero(Nodo *primero) {
	ListaLibros::primero = primero;
}

Nodo *ListaLibros::getActual() const {
	return actual;
}

void ListaLibros::setActual(Nodo *actual) {
	ListaLibros::actual = actual;
}
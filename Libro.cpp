//
// Created by Rafael Jiménez  on 2019-09-24.
//

#include "Libro.h"

Libro::Libro() {}

Libro::Libro(int id, const std::string &nombre) : id(id), nombre(nombre) {}

Libro::~Libro() {

}

int Libro::getId() const {
	return id;
}

void Libro::setId(int id) {
	Libro::id = id;
}

const std::string &Libro::getNombre() const {
	return nombre;
}

void Libro::setNombre(const std::string &nombre) {
	Libro::nombre = nombre;
}

std::string Libro::toString() {
	std::string resultado;

	resultado = "- id: " + std::to_string(id) + " nombre: " + nombre + "\n";
	return resultado;
}
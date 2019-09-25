//
// Created by Rafael Jiménez  on 2019-09-24.
//

#ifndef EJERCICIOLISTALIBROS_LIBRO_H
#define EJERCICIOLISTALIBROS_LIBRO_H
#include <string>
#include <ostream>

class Libro {
	int id;
	std::string nombre;


public:
	Libro();

	Libro(int id, const std::string &nombre);

	virtual ~Libro();

	int getId() const;

	void setId(int id);

	const std::string &getNombre() const;

	void setNombre(const std::string &nombre);

	std::string toString();
};


#endif //EJERCICIOLIBROS_LIBRO_H

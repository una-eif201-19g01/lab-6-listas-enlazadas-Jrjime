
#include <iostream>
#include "Libro.h"
#include "ListaLibros.h"

using namespace std;
int main() {
	Libro libro1(11, "Juego de Tronos");
	Libro libro2(22, "The Witcher");
	Libro libro3(33, "La Divina Comedia");
	Libro libro4(44, "Don Quijote");
	Libro libro5(55, "El Hobbit");



	ListaLibros* listaLibros = new ListaLibros();

	listaLibros->insertarInicio(libro1);
	listaLibros->insertarInicio(libro2);
	listaLibros->insertarInicio(libro3);
	listaLibros->insertarInicio(libro4);
	listaLibros->insertarInicio(libro5);

	int numero;

	//Se imprime Toda la lista de libros
	cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << endl;

	// Se elimina el primer nodo
	listaLibros->eliminarInicio();
	cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << endl;

	// Se inserta al final de la lista
	listaLibros->insertarFinal(libro5);
	cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << endl;


	//Busca el libro deseado y si existe imprime los atributos del libro 
	cout << "Inserte el id del libro que desea buscar" << endl;
	cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << endl;
	cin >> numero;

	if (listaLibros->encontrado(numero) == true) {

		cout << "El libro es:" + listaLibros->obtenerLibro(numero).toString() << endl;
	}
	else
	{
		cout << "No existe" << endl;
	}



	// Se elimina toda la lista
	delete(listaLibros);
	cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << endl;

	system("pause");
}
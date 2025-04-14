#include "LibroHechizos.h"
#include <iostream>

using namespace std;

LibroHechizos::LibroHechizos(string nombre, int poderMagico, double peso, string rareza, string elemento)
    : ArmaMagica(nombre, poderMagico, peso, rareza, elemento) {}

string LibroHechizos::obtenerElemento() const {
    return elemento;
}

void LibroHechizos::usar() const {
    cout << "Usando el libro de hechizos para invocar magia." << endl;
}
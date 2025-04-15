#include "Baston.h"
#include <iostream>

using namespace std;

Baston::Baston(string nombre, int poderMagico, double peso, string rareza, string elemento)
    : ArmaMagica(nombre, poderMagico, peso, rareza, elemento) {}

string Baston::obtenerElemento() const {
    return elemento;
}

void Baston::usar() const {
    cout << "Usando el bastón para lanzar un hechizo." << endl;
}
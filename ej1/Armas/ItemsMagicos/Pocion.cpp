#include "Pocion.h"
#include <iostream>

using namespace std;

Pocion::Pocion(string nombre, int poderMagico, double peso, string rareza, string elemento)
    : ArmaMagica(nombre, poderMagico, peso, rareza, elemento) {}

string Pocion::obtenerElemento() const {
    return elemento;
}

void Pocion::usar() const {
    cout << "Usando la poción para restaurar energía mágica." << endl;
}
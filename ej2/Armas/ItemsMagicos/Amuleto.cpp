#include "Amuleto.h"

Amuleto::Amuleto(string nombre, int poderMagico, double peso, string rareza, string elemento)
    : ArmaMagica(nombre, poderMagico, peso, rareza, elemento) {}

string Amuleto::obtenerElemento() const {
    return elemento;
}

void Amuleto::usar() const {
    cout << "Usando el amuleto para protegerse con magia." << endl;
}
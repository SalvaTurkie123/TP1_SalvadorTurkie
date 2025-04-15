#include "Garrote.h"
#include <iostream>

using namespace std;

Garrote::Garrote(string nombre, int danioFisico, double peso, string rareza, string material)
    : ArmaCombate(nombre, danioFisico, peso, rareza, material) {}

string Garrote::obtenerMaterial() const {
    return material;
}

void Garrote::usar() const {
    cout << "Usando el garrote para un ataque contundente." << endl;
}
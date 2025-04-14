#include "HachaDoble.h"
#include <iostream>

using namespace std;

HachaDoble::HachaDoble(string nombre, int danioFisico, double peso, string rareza, string material)
    : ArmaCombate(nombre, danioFisico, peso, rareza, material) {}

string HachaDoble::obtenerMaterial() const {
    return material;
}

void HachaDoble::usar() const {
    cout << "Usando el hacha doble para un ataque devastador." << endl;
}
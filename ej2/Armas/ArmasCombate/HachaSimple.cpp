#include "HachaSimple.h"
#include <iostream>

using namespace std;

HachaSimple::HachaSimple(string nombre, int danioFisico, double peso, string rareza, string material)
    : ArmaCombate(nombre, danioFisico, peso, rareza, material) {}

string HachaSimple::obtenerMaterial() const {
    return material;
}

void HachaSimple::usar() const {
    cout << "Usando el hacha simple para cortar enemigos." << endl;
}
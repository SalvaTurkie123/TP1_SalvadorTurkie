#include "Espada.h"

Espada::Espada(string nombre, int danioFisico, double peso, string rareza, string material)
    : ArmaCombate(nombre, danioFisico, peso, rareza, material) {}

string Espada::obtenerMaterial() const {
    return material;
}

void Espada::usar() const {
    cout << "Usando la espada para un ataque preciso." << endl;
}
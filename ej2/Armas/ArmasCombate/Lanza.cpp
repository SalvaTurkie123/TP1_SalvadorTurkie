#include "Lanza.h"

Lanza::Lanza(string nombre, int danioFisico, double peso, string rareza, string material)
    : ArmaCombate(nombre, danioFisico, peso, rareza, material) {}

string Lanza::obtenerMaterial() const {
    return material;
}

void Lanza::usar() const {
    cout << "Usando la lanza para atacar a distancia." << endl;
}
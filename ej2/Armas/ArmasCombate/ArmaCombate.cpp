#include "ArmaCombate.h"

ArmaCombate::ArmaCombate(string nombre, int danioFisico, double peso, string rareza, string material)
    : nombre(nombre), danioFisico(danioFisico), peso(peso), rareza(rareza), material(material) {}

ArmaCombate::~ArmaCombate() {}

string ArmaCombate::obtenerNombre() const {
    return nombre;
}

int ArmaCombate::obtenerDanio() const {
    return danioFisico;
}

double ArmaCombate::obtenerPeso() const {
    return peso;
}

string ArmaCombate::obtenerRareza() const {
    return rareza;
}
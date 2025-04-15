#pragma once
#include "ArmaCombate.h"

class Espada : public ArmaCombate {
public:
    Espada(string nombre, int danioFisico, double peso, string rareza, string material);
    string obtenerMaterial() const override;
    void usar() const override;
};
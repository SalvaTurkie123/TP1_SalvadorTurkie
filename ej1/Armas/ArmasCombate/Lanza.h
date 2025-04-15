#pragma once
#include "ArmaCombate.h"

class Lanza : public ArmaCombate {
public:
    Lanza(string nombre, int danioFisico, double peso, string rareza, string material);
    string obtenerMaterial() const override;
    void usar() const override;
};
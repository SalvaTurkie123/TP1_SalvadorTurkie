#pragma once
#include "ArmaCombate.h"

class Garrote : public ArmaCombate {
public:
    Garrote(string nombre, int danioFisico, double peso, string rareza, string material);
    string obtenerMaterial() const override;
    void usar() const override;
};
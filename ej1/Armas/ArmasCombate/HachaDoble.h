#pragma once
#include "ArmaCombate.h"

class HachaDoble : public ArmaCombate {
public:
    HachaDoble(string nombre, int danioFisico, double peso, string rareza, string material);
    string obtenerMaterial() const override;
    void usar() const override;
};
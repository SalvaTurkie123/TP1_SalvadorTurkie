#pragma once
#include "ArmaCombate.h"
#include <iostream>

class HachaSimple : public ArmaCombate {
public:
    HachaSimple(string nombre, int danioFisico, double peso, string rareza, string material);

    string obtenerMaterial() const override;
    void usar() const override;
};
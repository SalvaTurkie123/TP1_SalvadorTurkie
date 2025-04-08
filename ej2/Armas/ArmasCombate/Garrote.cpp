#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ArmasCombate/ArmaCombate.h"
#include <iostream>
#include <string>

using namespace std;

class Garrote : public ArmaCombate {
public:
    Garrote(string nombre, int danioFisico, double peso, string rareza, string material)
        : ArmaCombate(nombre, danioFisico, peso, rareza, material) {}

    string obtenerMaterial() const override {
        return material;
    }

    void usar() const override {
        cout << "Usando el garrote para un ataque contundente." << endl;
    }
};
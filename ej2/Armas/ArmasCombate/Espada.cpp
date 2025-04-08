#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ArmasCombate/ArmaCombate.h"
#include <iostream>
#include <string>

using namespace std;

class Espada : public ArmaCombate {
public:
    Espada(string nombre, int danioFisico, double peso, string rareza, string material)
        : ArmaCombate(nombre, danioFisico, peso, rareza, material) {}

    string obtenerMaterial() const override {
        return material;
    }

    void usar() const override {
        cout << "Usando la espada para un ataque preciso." << endl;
    }
};
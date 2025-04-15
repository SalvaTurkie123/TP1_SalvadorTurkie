#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej1/Armas/Arma.h"

using namespace std;

class ArmaCombate : public IArma {
protected:
    string nombre;
    int danioFisico;
    double peso;
    string rareza;
    string material;

public:
    ArmaCombate(string nombre, int danioFisico, double peso, string rareza, string material);
    virtual ~ArmaCombate();

    string obtenerNombre() const override;
    int obtenerDanio() const override;
    double obtenerPeso() const override;
    string obtenerRareza() const override;

    virtual string obtenerMaterial() const = 0;
};
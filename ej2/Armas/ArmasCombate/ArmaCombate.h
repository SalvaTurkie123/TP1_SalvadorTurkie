#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/Arma.h"

using namespace std;

class ArmaCombate : public IArma {
protected:
    string nombre;
    int danioFisico;
    double peso;
    string rareza;
    string material;

public:
    ArmaCombate(string nombre, int danioFisico, double peso, string rareza, string material)
        : nombre(nombre), danioFisico(danioFisico), peso(peso), rareza(rareza), material(material) {}

    virtual ~ArmaCombate() {}

    string obtenerNombre() const override { return nombre; }
    int obtenerDanio() const override { return danioFisico; }
    double obtenerPeso() const override { return peso; }
    string obtenerRareza() const override { return rareza; }

    virtual string obtenerMaterial() const = 0;
};

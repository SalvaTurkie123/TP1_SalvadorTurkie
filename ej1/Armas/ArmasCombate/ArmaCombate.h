#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej1/Armas/Arma.h"

using namespace std;

class ArmaCombate : public IArma {

// Atributos -> Protegidos para que las clases derivadas puedan acceder a ellos
protected:
    string nombre;
    int danioFisico;
    double peso;
    string rareza;
    string material;

public:
    ArmaCombate(string nombre, int danioFisico, double peso, string rareza, string material);
    virtual ~ArmaCombate();

    // Métodos de la interfaz IArma
    string obtenerNombre() const override;
    int obtenerDanio() const override;
    double obtenerPeso() const override;
    string obtenerRareza() const override;

    // Nuevos métodos específicos de ArmaCombate
    virtual string obtenerMaterial() const = 0;
};
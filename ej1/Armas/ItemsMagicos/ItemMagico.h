#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej1/Armas/Arma.h"

using namespace std;

class ArmaMagica : public IArma {
protected:
    string nombre;
    int poderMagico;
    double peso;
    string rareza;
    string elemento;

public:
    ArmaMagica(string nombre, int poderMagico, double peso, string rareza, string elemento);
    virtual ~ArmaMagica();

    string obtenerNombre() const override;
    int obtenerDanio() const override;
    double obtenerPeso() const override;
    string obtenerRareza() const override;

    virtual string obtenerElemento() const = 0;
};
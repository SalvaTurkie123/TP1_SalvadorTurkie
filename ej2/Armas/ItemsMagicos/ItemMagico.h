#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/Arma.h"

using namespace std;

class ArmaMagica : public IArma {
protected:
    string nombre;
    int poderMagico;
    double peso;
    string rareza;
    string elemento;

public:
    ArmaMagica(string nombre, int poderMagico, double peso, string rareza, string elemento)
        : nombre(nombre), poderMagico(poderMagico), peso(peso), rareza(rareza), elemento(elemento) {}

    virtual ~ArmaMagica() {}

    string obtenerNombre() const override { return nombre; }
    int obtenerDanio() const override { return poderMagico; }
    double obtenerPeso() const override { return peso; }
    string obtenerRareza() const override { return rareza; }

    virtual string obtenerElemento() const = 0;
};

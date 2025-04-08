#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Personaje.h"

class Mago : public IPersonaje {
protected:
    string nombre;
    int nivel;
    int vida;
    int mana;
    string especialidad;

public:
    Mago(string nombre, int nivel, int vida, int mana, string especialidad)
        : nombre(nombre), nivel(nivel), vida(vida), mana(mana), especialidad(especialidad) {}

    virtual ~Mago() {}

    string obtenerNombre() const override { return nombre; }
    int obtenerNivel() const override { return nivel; }
    int obtenerVida() const override { return vida; }

    virtual void lanzarHechizo() const = 0;
    virtual void regenerarMana() = 0;
};
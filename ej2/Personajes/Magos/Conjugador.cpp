#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Magos/Magos.h"
#include <iostream>
#include <string>

using namespace std;

class Conjurador : public Mago {
public:
    Conjurador(string nombre, int nivel, int vida, int mana, string especialidad)
        : Mago(nombre, nivel, vida, mana, especialidad) {}

    void atacar() const override {
        cout << nombre << " invoca criaturas para atacar." << endl;
    }

    void defender() const override {
        cout << nombre << " invoca un muro mágico para defenderse." << endl;
    }

    void lanzarHechizo() const override {
        cout << nombre << " conjura un hechizo de " << especialidad << "." << endl;
    }

    void regenerarMana() override {
        cout << nombre << " regenera su mana usando un ritual mágico." << endl;
    }
};
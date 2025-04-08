#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Magos/Magos.h"
#include <iostream>
#include <string>

using namespace std;

class Hechicero : public Mago {
public:
    Hechicero(string nombre, int nivel, int vida, int mana, string especialidad)
        : Mago(nombre, nivel, vida, mana, especialidad) {}

    void atacar() const override {
        cout << nombre << " lanza un hechizo de ataque." << endl;
    }

    void defender() const override {
        cout << nombre << " usa un escudo mágico para defenderse." << endl;
    }

    void lanzarHechizo() const override {
        cout << nombre << " lanza un poderoso hechizo de " << especialidad << "." << endl;
    }

    void regenerarMana() override {
        cout << nombre << " regenera su mana usando una poción mágica." << endl;
    }
};
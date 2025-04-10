#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Magos/Magos.h"
#include <iostream>
#include <string>

using namespace std;

class Nigromante : public Mago {
public:
    Nigromante(string nombre, int nivel, int vida, int mana, string especialidad)
        : Mago(nombre, nivel, vida, mana, especialidad) {}

    void atacar() const override {
        cout << nombre << " invoca a los muertos para atacar." << endl;
    }

    void defender() const override {
        cout << nombre << " usa magia de los muertos para protegerse." << endl;
    }

    void lanzarHechizo() const override {
        cout << nombre << " lanza un hechizo de necromancia de " << especialidad << "." << endl;
    }

    void regenerarMana() override {
        cout << nombre << " regenera su mana absorbiendo la energía de los muertos." << endl;
    }
};
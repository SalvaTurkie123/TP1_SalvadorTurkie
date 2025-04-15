#include "Conjurador.h"
#include <iostream>

using namespace std;

Conjurador::Conjurador(string nombre, int nivel, int vida, int mana, string especialidad)
    : Mago(nombre, nivel, vida, mana, especialidad) {}

void Conjurador::atacar() const {
    cout << nombre << " invoca criaturas para atacar." << endl;
}

void Conjurador::defender() const {
    cout << nombre << " invoca un muro mágico para defenderse." << endl;
}

void Conjurador::lanzarHechizo() const {
    cout << nombre << " conjura un hechizo de " << especialidad << "." << endl;
}

void Conjurador::regenerarMana() {
    cout << nombre << " regenera su mana usando un ritual mágico." << endl;
}
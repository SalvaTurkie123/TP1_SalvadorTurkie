#include "Hechicero.h"
#include <iostream>

using namespace std;

Hechicero::Hechicero(string nombre, int nivel, int vida, int mana, string especialidad)
    : Mago(nombre, nivel, vida, mana, especialidad) {}

void Hechicero::atacar() const {
    cout << nombre << " lanza un hechizo de ataque." << endl;
}

void Hechicero::defender() const {
    cout << nombre << " usa un escudo mágico para defenderse." << endl;
}

void Hechicero::lanzarHechizo() const {
    cout << nombre << " lanza un poderoso hechizo de " << especialidad << "." << endl;
}

void Hechicero::regenerarMana() {
    cout << nombre << " regenera su mana usando una poción mágica." << endl;
}
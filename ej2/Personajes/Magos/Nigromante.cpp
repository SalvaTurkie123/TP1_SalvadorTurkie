#include "Nigromante.h"
#include <iostream>

using namespace std;

Nigromante::Nigromante(string nombre, int nivel, int vida, int mana, string especialidad)
    : Mago(nombre, nivel, vida, mana, especialidad) {}

void Nigromante::atacar() const {
    cout << nombre << " invoca a los muertos para atacar." << endl;
}

void Nigromante::defender() const {
    cout << nombre << " usa magia de los muertos para protegerse." << endl;
}

void Nigromante::lanzarHechizo() const {
    cout << nombre << " lanza un hechizo de necromancia de " << especialidad << "." << endl;
}

void Nigromante::regenerarMana() {
    cout << nombre << " regenera su mana absorbiendo la energía de los muertos." << endl;
}
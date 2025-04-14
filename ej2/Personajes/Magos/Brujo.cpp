#include "Brujo.h"
#include <iostream>

using namespace std;

Brujo::Brujo(string nombre, int nivel, int vida, int mana, string especialidad)
    : Mago(nombre, nivel, vida, mana, especialidad) {}

void Brujo::atacar() const {
    cout << nombre << " lanza un hechizo oscuro para atacar." << endl;
}

void Brujo::defender() const {
    cout << nombre << " usa magia oscura para absorber el daño." << endl;
}

void Brujo::lanzarHechizo() const {
    cout << nombre << " invoca un hechizo oscuro de " << especialidad << "." << endl;
}

void Brujo::regenerarMana() {
    cout << nombre << " regenera su mana sacrificando su propia vida." << endl;
}
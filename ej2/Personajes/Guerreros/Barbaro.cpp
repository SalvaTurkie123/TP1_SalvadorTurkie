#include "Barbaro.h"
#include <iostream>

using namespace std;

Barbaro::Barbaro(string nombre, int nivel, int vida, int fuerza, string armaFavorita)
    : Guerrero(nombre, nivel, vida, fuerza, armaFavorita) {}

void Barbaro::atacar() const {
    cout << nombre << " ataca con su " << armaFavorita << " con fuerza brutal." << endl;
}

void Barbaro::defender() const {
    cout << nombre << " bloquea el ataque con su resistencia física." << endl;
}

void Barbaro::usarHabilidadEspecial() const {
    cout << nombre << " entra en un estado de furia, aumentando su fuerza." << endl;
}

void Barbaro::mejorarArma() {
    cout << nombre << " mejora su " << armaFavorita << " para aumentar su daño." << endl;
}
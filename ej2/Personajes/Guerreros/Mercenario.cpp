#include "Mercenario.h"
#include <iostream>

using namespace std;

Mercenario::Mercenario(string nombre, int nivel, int vida, int fuerza, string armaFavorita)
    : Guerrero(nombre, nivel, vida, fuerza, armaFavorita) {}

void Mercenario::atacar() const {
    cout << nombre << " ataca con su " << armaFavorita << " por una recompensa." << endl;
}

void Mercenario::defender() const {
    cout << nombre << " usa su experiencia para bloquear el ataque." << endl;
}

void Mercenario::usarHabilidadEspecial() const {
    cout << nombre << " realiza un ataque sorpresa para desorientar al enemigo." << endl;
}

void Mercenario::mejorarArma() {
    cout << nombre << " mejora su " << armaFavorita << " para aumentar su daño." << endl;
}
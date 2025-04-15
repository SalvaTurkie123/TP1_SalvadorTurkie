#include "Gladiador.h"
#include <iostream>

using namespace std;

Gladiador::Gladiador(string nombre, int nivel, int vida, int fuerza, string armaFavorita)
    : Guerrero(nombre, nivel, vida, fuerza, armaFavorita) {}

void Gladiador::atacar() const {
    cout << nombre << " ataca con su " << armaFavorita << " con precisión y técnica." << endl;
}

void Gladiador::defender() const {
    cout << nombre << " usa su agilidad para esquivar el ataque." << endl;
}

void Gladiador::usarHabilidadEspecial() const {
    cout << nombre << " realiza un combo de ataques rápidos." << endl;
}

void Gladiador::mejorarArma() {
    cout << nombre << " mejora su " << armaFavorita << " para aumentar su efectividad." << endl;
}
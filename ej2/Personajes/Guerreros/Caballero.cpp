#include "Caballero.h"
#include <iostream>

using namespace std;

Caballero::Caballero(string nombre, int nivel, int vida, int fuerza, string armaFavorita)
    : Guerrero(nombre, nivel, vida, fuerza, armaFavorita) {}

void Caballero::atacar() const {
    cout << nombre << " ataca con su " << armaFavorita << " con honor y precisión." << endl;
}

void Caballero::defender() const {
    cout << nombre << " usa su escudo para bloquear el ataque." << endl;
}

void Caballero::usarHabilidadEspecial() const {
    cout << nombre << " lidera a sus aliados con un grito de guerra." << endl;
}

void Caballero::mejorarArma() {
    cout << nombre << " mejora su " << armaFavorita << " para aumentar su daño." << endl;
}
#include "Paladin.h"
#include <iostream>

using namespace std;

Paladin::Paladin(string nombre, int nivel, int vida, int fuerza, string armaFavorita)
    : Guerrero(nombre, nivel, vida, fuerza, armaFavorita) {}

void Paladin::atacar() const {
    cout << nombre << " ataca con su " << armaFavorita << " con fervor divino." << endl;
}

void Paladin::defender() const {
    cout << nombre << " usa su escudo sagrado para protegerse." << endl;
}

void Paladin::usarHabilidadEspecial() const {
    cout << nombre << " invoca una bendición divina para fortalecer a sus aliados." << endl;
}

void Paladin::mejorarArma() {
    cout << nombre << " mejora su " << armaFavorita << " con magia sagrada." << endl;
}
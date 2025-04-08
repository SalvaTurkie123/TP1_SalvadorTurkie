#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Guerreros/Guerreros.h"
#include <iostream>
#include <string>

using namespace std;

class Caballero : public Guerrero {
public:
    Caballero(string nombre, int nivel, int vida, int fuerza, string armaFavorita)
        : Guerrero(nombre, nivel, vida, fuerza, armaFavorita) {}

    void atacar() const override {
        cout << nombre << " ataca con su " << armaFavorita << " con honor y precisión." << endl;
    }

    void defender() const override {
        cout << nombre << " usa su escudo para bloquear el ataque." << endl;
    }

    void usarHabilidadEspecial() const override {
        cout << nombre << " lidera a sus aliados con un grito de guerra." << endl;
    }

    void mejorarArma() override {
        cout << nombre << " mejora su " << armaFavorita << " para aumentar su daño." << endl;
    }
};
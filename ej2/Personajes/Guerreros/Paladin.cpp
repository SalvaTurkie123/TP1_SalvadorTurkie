#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Guerreros/Guerreros.h"
#include <iostream>
#include <string>

using namespace std;

class Paladin : public Guerrero {
public:
    Paladin(string nombre, int nivel, int vida, int fuerza, string armaFavorita)
        : Guerrero(nombre, nivel, vida, fuerza, armaFavorita) {}

    void atacar() const override {
        cout << nombre << " ataca con su " << armaFavorita << " con precisión divina." << endl;
    }

    void defender() const override {
        cout << nombre << " usa su escudo sagrado para bloquear el ataque." << endl;
    }

    void usarHabilidadEspecial() const override {
        cout << nombre << " invoca una bendición para curar a sus aliados." << endl;
    }

    void mejorarArma() override {
        cout << nombre << " mejora su " << armaFavorita << " con magia sagrada." << endl;
    }
};
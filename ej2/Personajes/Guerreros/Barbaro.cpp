#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Guerreros/Guerreros.h"
#include <iostream>
#include <string>

using namespace std;

class Barbaro : public Guerrero {
public:
    Barbaro(string nombre, int nivel, int vida, int fuerza, string armaFavorita)
        : Guerrero(nombre, nivel, vida, fuerza, armaFavorita) {}

    void atacar() const override {
        cout << nombre << " ataca con su " << armaFavorita << " con fuerza brutal." << endl;
    }

    void defender() const override {
        cout << nombre << " bloquea el ataque con su resistencia física." << endl;
    }

    void usarHabilidadEspecial() const override {
        cout << nombre << " entra en un estado de furia, aumentando su fuerza." << endl;
    }

    void mejorarArma() override {
        cout << nombre << " mejora su " << armaFavorita << " para aumentar su daño." << endl;
    }
};
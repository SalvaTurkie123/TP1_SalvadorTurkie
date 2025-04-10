#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Guerreros/Guerreros.h"
#include <iostream>
#include <string>

using namespace std;

class Mercenario : public Guerrero {
public:
    Mercenario(string nombre, int nivel, int vida, int fuerza, string armaFavorita)
        : Guerrero(nombre, nivel, vida, fuerza, armaFavorita) {}

    void atacar() const override {
        cout << nombre << " ataca con su " << armaFavorita << " por una recompensa." << endl;
    }

    void defender() const override {
        cout << nombre << " esquiva el ataque con agilidad." << endl;
    }

    void usarHabilidadEspecial() const override {
        cout << nombre << " negocia para obtener una ventaja en combate." << endl;
    }

    void mejorarArma() override {
        cout << nombre << " mejora su " << armaFavorita << " para aumentar su efectividad." << endl;
    }
};
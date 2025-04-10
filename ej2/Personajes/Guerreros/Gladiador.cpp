#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Guerreros/Guerreros.h"
#include <iostream>
#include <string>

using namespace std;

class Gladiador : public Guerrero {
public:
    Gladiador(string nombre, int nivel, int vida, int fuerza, string armaFavorita)
        : Guerrero(nombre, nivel, vida, fuerza, armaFavorita) {}

    void atacar() const override {
        cout << nombre << " ataca con su " << armaFavorita << " para entretener a la multitud." << endl;
    }

    void defender() const override {
        cout << nombre << " bloquea el ataque con su armadura pesada." << endl;
    }

    void usarHabilidadEspecial() const override {
        cout << nombre << " realiza un movimiento espectacular para impresionar a la audiencia." << endl;
    }

    void mejorarArma() override {
        cout << nombre << " mejora su " << armaFavorita << " para aumentar su daño." << endl;
    }
};
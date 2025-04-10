#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Magos/Magos.h"
#include <iostream>
#include <string>

using namespace std;

class Brujo : public Mago {
public:
    Brujo(string nombre, int nivel, int vida, int mana, string especialidad)
        : Mago(nombre, nivel, vida, mana, especialidad) {}

    void atacar() const override {
        cout << nombre << " lanza un hechizo oscuro para atacar." << endl;
    }

    void defender() const override {
        cout << nombre << " usa magia oscura para absorber el daño." << endl;
    }

    void lanzarHechizo() const override {
        cout << nombre << " invoca un hechizo oscuro de " << especialidad << "." << endl;
    }

    void regenerarMana() override {
        cout << nombre << " regenera su mana sacrificando su propia vida." << endl;
    }
};
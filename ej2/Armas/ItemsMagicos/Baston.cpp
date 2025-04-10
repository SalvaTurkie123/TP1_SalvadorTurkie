#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ItemsMagicos/ItemMagico.h"
#include <iostream>
#include <string>

using namespace std;

class Baston : public ArmaMagica {
public:
    Baston(string nombre, int poderMagico, double peso, string rareza, string elemento)
        : ArmaMagica(nombre, poderMagico, peso, rareza, elemento) {}

    string obtenerElemento() const override {
        return elemento;
    }

    void usar() const override {
        cout << "Usando el bastón para lanzar un hechizo." << endl;
    }
};
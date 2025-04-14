#include "ItemMagico.h"

ArmaMagica::ArmaMagica(string nombre, int poderMagico, double peso, string rareza, string elemento)
    : nombre(nombre), poderMagico(poderMagico), peso(peso), rareza(rareza), elemento(elemento) {}

ArmaMagica::~ArmaMagica() {}

string ArmaMagica::obtenerNombre() const {
    return nombre;
}

int ArmaMagica::obtenerDanio() const {
    return poderMagico;
}

double ArmaMagica::obtenerPeso() const {
    return peso;
}

string ArmaMagica::obtenerRareza() const {
    return rareza;
}
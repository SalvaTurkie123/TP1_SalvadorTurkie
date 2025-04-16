#include "Magos.h"

Mago::Mago(string nombre, int nivel, int vida, int mana, string especialidad)
    : nombre(nombre), nivel(nivel), vida(vida), mana(mana), especialidad(especialidad) {}

Mago::~Mago() {}

string Mago::obtenerNombre() const {
    return nombre;
}

int Mago::obtenerNivel() const {
    return nivel;
}

int Mago::obtenerVida() const {
    return vida;
}

void Mago::agregarArma(unique_ptr<IArma> arma) {
    armas.push_back(std::move(arma));
}

const vector<unique_ptr<IArma>>& Mago::obtenerArmas() const {
    return armas;
}
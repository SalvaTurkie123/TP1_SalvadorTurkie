#include "Guerreros.h"

Guerrero::Guerrero(string nombre, int nivel, int vida, int fuerza, string armaFavorita)
    : nombre(nombre), nivel(nivel), vida(vida), fuerza(fuerza), armaFavorita(armaFavorita) {}

Guerrero::~Guerrero() {}

string Guerrero::obtenerNombre() const {
    return nombre;
}

int Guerrero::obtenerNivel() const {
    return nivel;
}

int Guerrero::obtenerVida() const {
    return vida;
}

void Guerrero::agregarArma(shared_ptr<IArma> arma) {
    armas.push_back(arma);
}

const vector<shared_ptr<IArma>>& Guerrero::obtenerArmas() const {
    return armas;
}
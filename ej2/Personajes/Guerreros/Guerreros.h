#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Personaje.h"

class Guerrero : public IPersonaje {
protected:
    string nombre;
    int nivel;
    int vida;
    int fuerza;
    string armaFavorita;

public:
    Guerrero(string nombre, int nivel, int vida, int fuerza, string armaFavorita)
        : nombre(nombre), nivel(nivel), vida(vida), fuerza(fuerza), armaFavorita(armaFavorita) {}

    virtual ~Guerrero() {}

    string obtenerNombre() const override { return nombre; }
    int obtenerNivel() const override { return nivel; }
    int obtenerVida() const override { return vida; }

    virtual void usarHabilidadEspecial() const = 0;
    virtual void mejorarArma() = 0;
};
#pragma once
#include "../Personaje.h"

class Mago : public IPersonaje {
protected:
    string nombre;
    int nivel;
    int vida;
    int mana;
    string especialidad;
    vector<shared_ptr<IArma>> armas; // Relación "has-a"

public:
    Mago(string nombre, int nivel, int vida, int mana, string especialidad);
    virtual ~Mago();

    string obtenerNombre() const override;
    int obtenerNivel() const override;
    int obtenerVida() const override;

    virtual void lanzarHechizo() const = 0;
    virtual void regenerarMana() = 0;

    // Implementación de los métodos relacionados con las armas
    void agregarArma(shared_ptr<IArma> arma) override;
    const vector<shared_ptr<IArma>>& obtenerArmas() const override;
};
#pragma once
#include "../Personaje.h"

class Guerrero : public IPersonaje {
protected:
    string nombre;
    int nivel;
    int vida;
    int fuerza;
    string armaFavorita;
    vector<shared_ptr<IArma>> armas; // Relación "has-a"

public:
    Guerrero(string nombre, int nivel, int vida, int fuerza, string armaFavorita);
    virtual ~Guerrero();

    string obtenerNombre() const override;
    int obtenerNivel() const override;
    int obtenerVida() const override;

    virtual void usarHabilidadEspecial() const = 0;
    virtual void mejorarArma() = 0;

    // Implementación de los métodos relacionados con las armas
    void agregarArma(shared_ptr<IArma> arma) override;
    const vector<shared_ptr<IArma>>& obtenerArmas() const override;
};
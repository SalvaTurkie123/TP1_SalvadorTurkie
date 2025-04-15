#pragma once
#include "../Personaje.h"

class Mago : public IPersonaje {

// Atributos -> Protegidos para que las clases derivadas puedan acceder a ellos
protected:
    string nombre;
    int nivel;
    int vida;
    int mana;
    string especialidad;
    vector<shared_ptr<IArma>> armas; // Relación "has-a"

public:

    // Constructor y destructor
    Mago(string nombre, int nivel, int vida, int mana, string especialidad);
    virtual ~Mago();

    // Métodos de la interfaz IPersonaje
    string obtenerNombre() const override;
    int obtenerNivel() const override;
    int obtenerVida() const override;
    void agregarArma(shared_ptr<IArma> arma) override;
    const vector<shared_ptr<IArma>>& obtenerArmas() const override;

    // Métodos específicos de Mago
    virtual void lanzarHechizo() const = 0;
    virtual void regenerarMana() = 0;

};
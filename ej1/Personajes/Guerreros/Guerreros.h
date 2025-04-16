#pragma once
#include "../Personaje.h"

class Guerrero : public IPersonaje {

// Atributos -> Protegidos para que las clases derivadas puedan acceder a ellos
protected:
    string nombre;
    int nivel;
    int vida;
    int fuerza;
    string armaFavorita;
    vector<unique_ptr<IArma>> armas; // Relacion 'has-a

public:

    // Constructor y destructor
    Guerrero(string nombre, int nivel, int vida, int fuerza, string armaFavorita);
    virtual ~Guerrero();

    // Métodos de la interfaz IPersonaje
    string obtenerNombre() const override;
    int obtenerNivel() const override;
    int obtenerVida() const override;
    void agregarArma(unique_ptr<IArma> arma) override;
    const vector<unique_ptr<IArma>>& obtenerArmas() const override;
    
    // Métodos específicos de Guerrero
    virtual void usarHabilidadEspecial() const = 0;
    virtual void mejorarArma() = 0;

    
};
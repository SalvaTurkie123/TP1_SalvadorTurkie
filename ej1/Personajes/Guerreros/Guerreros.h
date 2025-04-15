#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej1/Personajes/Personaje.h"

class Guerrero : public IPersonaje {

// Atributos -> Protegidos para que las clases derivadas puedan acceder a ellos
protected:
    string nombre;
    int nivel;
    int vida;
    int fuerza;
    string armaFavorita;
    vector<shared_ptr<IArma>> armas; // Relacion 'has-a

public:

    // Constructor y destructor
    Guerrero(string nombre, int nivel, int vida, int fuerza, string armaFavorita);
    virtual ~Guerrero();

    // Métodos de la interfaz IPersonaje
    string obtenerNombre() const override;
    int obtenerNivel() const override;
    int obtenerVida() const override;
    void agregarArma(shared_ptr<IArma> arma) override;
    const vector<shared_ptr<IArma>>& obtenerArmas() const override;
    
    // Métodos específicos de Guerrero
    virtual void usarHabilidadEspecial() const = 0;
    virtual void mejorarArma() = 0;


};
#pragma once
#include <memory>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../ej1/Personajes/Personaje.h"

using namespace std;

class Batalla {

private:

    // Atributos
    unique_ptr<IPersonaje> jugador1;
    unique_ptr<IPersonaje> jugador2;
    int hpJugador1;
    int hpJugador2;

    // Métodos privados
    string obtenerNombreAtaque(int opcion) const;
    int calcularResultado(int opcionJguador1, int opcionJugador2) const;


public:

    // Constructor
    Batalla(unique_ptr<IPersonaje> j1, unique_ptr<IPersonaje> j2);

    // Funcion de batalla
    void iniciar();

};
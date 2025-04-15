#pragma once
#include <memory>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej1/Personajes/Personaje.h"

using namespace std;

class Batalla {

private:

    shared_ptr<IPersonaje> jugador1;
    shared_ptr<IPersonaje> jugador2;

    int hpJugador1;
    int hpJugador2;


    string obtenerNombreAtaque(int opcion) const;
    int calcularResultado(int opcionJguador1, int opcionJugador2) const;


public:

    Batalla(shared_ptr<IPersonaje> jugador1, shared_ptr<IPersonaje> jugador2);

    void iniciar();

};
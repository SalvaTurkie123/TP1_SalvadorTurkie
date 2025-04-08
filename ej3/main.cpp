#include "PersonajeFactory.h"
#include <iostream>

/*

g++ -std=c++17 -o ej3_main /root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej3/main.cpp /root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej3/PersonajeFactory.cpp
./ej3_main

*/

int main() {
    // Inicializar el generador de números aleatorios
    PersonajeFactory::inicializarRandom();

    // Crear un personaje
    auto personaje = PersonajeFactory::crearPersonaje("Hechicero");
    cout << "Personaje creado: " << personaje->obtenerNombre() << endl;

    // Crear un arma
    auto arma = PersonajeFactory::crearArma("Espada");
    cout << "Arma creada: " << arma->obtenerNombre() << endl;

    return 0;
}
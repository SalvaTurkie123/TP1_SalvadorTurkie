#include "PersonajeFactory.h"
#include <iostream>

/*

g++ -std=c++17 -o ej3_main /root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej3/main.cpp /root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej3/PersonajeFactory.cpp
./ej3_main

*/

int main() {
    // Inicializar el generador de números aleatorios
    PersonajeFactory::inicializarRandom();

    // Generar personajes con armas
    auto personajes = PersonajeFactory::generarPersonajesConArmas();

    // Mostrar los personajes generados
    cout << "\nPersonajes generados:\n";
    for (const auto& personaje : personajes) {
        cout << " - " << personaje->obtenerNombre() << endl;
    }

    return 0;
}
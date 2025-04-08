#include "PersonajeFactory.h"
#include <iostream>

/*

g++ -std=c++17 -o ej3_main /root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej3/main.cpp /root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej3/PersonajeFactory.cpp
./ej3_main

*/

int main() {
    // Inicializar el generador de números aleatorios
    PersonajeFactory::inicializarRandom();

    // Generar números aleatorios en el rango [3, 7]
    int cantidadMagos = PersonajeFactory::generarNumeroAleatorio(3, 7);
    int cantidadGuerreros = PersonajeFactory::generarNumeroAleatorio(3, 7);

    cout << "Cantidad de magos: " << cantidadMagos << endl;
    cout << "Cantidad de guerreros: " << cantidadGuerreros << endl;

    // Generar un número aleatorio en el rango [0, 2] para las armas
    int cantidadArmas = PersonajeFactory::generarNumeroAleatorio(0, 2);
    cout << "Cantidad de armas para un personaje: " << cantidadArmas << endl;

    return 0;
}
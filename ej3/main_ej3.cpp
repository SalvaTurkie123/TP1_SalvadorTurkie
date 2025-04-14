#include "PersonajeFactory.h"
#include <iostream>

int main() {
    // Inicializar el generador de números aleatorios
    PersonajeFactory::inicializarRandom();

    // Generar personajes con armas
    auto personajes = PersonajeFactory::generarPersonajesConArmas();

    // Mostrar los personajes generados y sus armas
    cout << "\nPersonajes generados:\n";
    for (const auto& personaje : personajes) {
        cout << " - " << personaje->obtenerNombre() << " con armas:\n";
        for (const auto& arma : personaje->obtenerArmas()) {
            cout << "   * " << arma->obtenerNombre() << " (" << arma->obtenerRareza() << ")\n";
        }
    }

    return 0;
}
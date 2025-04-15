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
        const auto& armas = personaje->obtenerArmas();
        if (armas.empty()) {
            cout << "   * Sin armas asignadas.\n";
        } else {
            for (const auto& arma : armas) {
                cout << "   * " << arma->obtenerNombre() << " (Rareza: " << arma->obtenerRareza() << ")\n";
            }
        }
    }
    return 0;
}


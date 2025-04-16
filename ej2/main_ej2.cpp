#include "PersonajeFactory.h"
#include <iostream>

int main() {
    // Inicializar el generador de números aleatorios
    PersonajeFactory::inicializarRandom();

    // Generar personajes con armas
    auto personajes = PersonajeFactory::generarPersonajesConArmas();

    // Mostrar los personajes generados y sus armas
    cout << "=====================================\n";
    cout << "         Personajes Generados        \n";
    cout << "=====================================\n";

    for (const auto& personaje : personajes) {
        cout << "\n- " << personaje->obtenerNombre() 
             << " (Nivel: " << personaje->obtenerNivel() 
             << ", Vida: " << personaje->obtenerVida() << ")\n";

        cout << "   Armas:\n";

        const auto& armas = personaje->obtenerArmas();
        if (armas.empty()) {
            cout << "     * Sin armas asignadas.\n";
        } else {
            for (const auto& arma : armas) {
                cout << "     * " << arma->obtenerNombre() 
                     << " (Rareza: " << arma->obtenerRareza() 
                     << ", Daño: " << arma->obtenerDanio() << ")\n";
            }
        }
    }

    cout << "\n=====================================\n";
    cout << "           Fin de la lista           \n";
    cout << "=====================================\n";

    return 0;
}

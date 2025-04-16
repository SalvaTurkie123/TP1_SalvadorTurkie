#include "Batalla.h"

Batalla::Batalla(unique_ptr<IPersonaje> j1, unique_ptr<IPersonaje> j2) 
    : jugador1(std::move(j1)), jugador2(std::move(j2)), hpJugador1(100), hpJugador2(100) {}

string Batalla::obtenerNombreAtaque(int opcion) const {
    switch (opcion) {
        case 1: return "Golpe Fuerte";
        case 2: return "Golpe Rapido";
        case 3: return "Defensa y Golpe";
        default: return "Desconocido";
    }
}

int Batalla::calcularResultado(int opcionJugador1, int opcionJugador2) const {
    if (opcionJugador1 == opcionJugador2) return 0; // Empate
    if ((opcionJugador1 == 1 && opcionJugador2 == 2) || 
        (opcionJugador1 == 2 && opcionJugador2 == 3) || 
        (opcionJugador1 == 3 && opcionJugador2 == 1)) return 1; // Gana el jugador 1
    return -1; // Gana el segundo jugador
}

int dañoAdicional(const vector<unique_ptr<IArma>>& armas) {
    return !armas.empty() ? armas[0]->obtenerDanio() : 0; // Si no hay arma, no hay daño adicional
}

void Batalla::iniciar() {
    cout << "=================  ========================\n";
    cout << "¡Arranca la batalla!\n";
    cout << "Jugador 1: " << jugador1->obtenerNombre() << "\n";
    cout << "Jugador 2: " << jugador2->obtenerNombre() << "\n";
    cout << "=========================================\n";

    // Mientras ambos jugadores tengan vida
    while (hpJugador1 > 0 && hpJugador2 > 0) {
        cout << "\n-----------------------------------------\n";
        cout << "Estado actual:\n";
        cout << "Jugador 1 (" << jugador1->obtenerNombre() << "): " << hpJugador1 << " HP\n";
        cout << "Jugador 2 (" << jugador2->obtenerNombre() << "): " << hpJugador2 << " HP\n";
        cout << "-----------------------------------------\n";

        // Mostrar armas de los jugadores
        const auto& armasJ1 = jugador1->obtenerArmas();
        const auto& armasJ2 = jugador2->obtenerArmas();
        string armaJugador1 = armasJ1.empty() ? "sin arma" : armasJ1[0]->obtenerNombre();
        string armaJugador2 = armasJ2.empty() ? "sin arma" : armasJ2[0]->obtenerNombre();

        // Opción jugador 1
        int opcionJugador1;
        cout << "Jugador 1, elige tu ataque:\n";
        cout << "1: Golpe Fuerte\n";
        cout << "2: Golpe Rápido\n";
        cout << "3: Defensa y Golpe\n";
        cout << "Tu elección: ";
        cin >> opcionJugador1;

        // Opción jugador 2
        int opcionJugador2 = rand() % 3 + 1;

        cout << "\nAcciones:\n";
        cout << "Jugador 1 (" << jugador1->obtenerNombre() << ") ataca con " << armaJugador1 
             << " usando " << obtenerNombreAtaque(opcionJugador1) << ".\n";
        cout << "Jugador 2 (" << jugador2->obtenerNombre() << ") ataca con " << armaJugador2 
             << " usando " << obtenerNombreAtaque(opcionJugador2) << ".\n";

        // Calcular el resultado
        int resultado = calcularResultado(opcionJugador1, opcionJugador2);
        if (resultado == 1) {
            int daño = 10 + dañoAdicional(jugador1->obtenerArmas());
            cout << "\nResultado: " << jugador1->obtenerNombre() << " gana esta ronda y hace " 
                 << daño << " puntos de daño.\n";
            hpJugador2 -= daño;
        } else if (resultado == -1) {
            int daño = 10 + dañoAdicional(jugador2->obtenerArmas());
            cout << "\nResultado: " << jugador2->obtenerNombre() << " gana esta ronda y hace " 
                 << daño << " puntos de daño.\n";
            hpJugador1 -= daño;
        } else {
            cout << "\nResultado: Hubo un empate, nadie recibe daño.\n";
        }
    }

    // Mostrar el ganador
    cout << "\n=========================================\n";
    if (hpJugador1 > 0) {
        cout << "¡El jugador 1 (" << jugador1->obtenerNombre() << ") ganó la batalla!\n";
        cout << "Vida restante: " << hpJugador1 << " HP\n";
    } else {
        cout << "¡El jugador 2 (" << jugador2->obtenerNombre() << ") ganó la batalla!\n";
        cout << "Vida restante: " << hpJugador2 << " HP\n";
    }
    cout << "=========================================\n";
}
#include "Batalla.h"

Batalla::Batalla(shared_ptr<IPersonaje> jugador1 , shared_ptr<IPersonaje> jugador2) 
    : jugador1(jugador1), jugador2(jugador2), hpJugador1(100), hpJugador2(100) {}

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

    if ((opcionJugador1 == 1 && opcionJugador2 == 2) || (opcionJugador1 == 2 && opcionJugador2 == 3) || (opcionJugador1 == 3 && opcionJugador2 == 1) ) return 1; // Gana el jugador 1

    return -1; // Gana el segundo jugador

}

void Batalla::iniciar(){

    cout << "Comienza la batalla entre " << jugador1->obtenerNombre() << "y " << jugador2->obtenerNombre() << "!\n";

    while (hpJugador1 > 0 && hpJugador2 > 0) {

        // Mostrar vida actual
        cout << "Vida actual del juagador 1: " << jugador1->obtenerNombre() << " tiene " << hpJugador1 << " HP\n";
        cout << "Vida actual del juagador 2: " << jugador2->obtenerNombre() << " tiene " << hpJugador2 << " HP\n";

        // Opcion jugador 1 
        int opcionJugador1;
        cout << "Elegí tu ataque: (1: Golpe Fuerte, 2: Golpe Rapido, 3: Defensa y Golpe) ";
        cin >> opcionJugador1;

        // Opcion jugador 2
        int opcionJugador2 = rand() % 3 + 1;

        cout << " El jugador 1 (" << jugador1->obtenerNombre() << ") usó " << obtenerNombreAtaque(opcionJugador1) <<  ".\n";
        cout << " El jugador 2 (" << jugador2->obtenerNombre() << ") usó " << obtenerNombreAtaque(opcionJugador2) <<  ".\n";

        // Calcular el resultado
        int resultado = calcularResultado(opcionJugador1, opcionJugador2);
        if (resultado == 1) {
            cout << jugador1->obtenerNombre() << " gana esta ronda y hace 10 puntos de daño.\n";
            hpJugador2 -= 10;
        }
        else if (resultado == -1) {
            cout << jugador2->obtenerNombre() << " gana esta ronda y hace 10 puntos de daño.\n";
            hpJugador1 -= 10;
        }
        else cout << "Hubo un empate, nadie recibe daño.\n";
    
    }

    // Mostrar el ganador
    if (hpJugador1 > 0) {
        cout << jugador1->obtenerNombre() << " gano la batalla con " << hpJugador1 << " de vida restante. \n";
    }
    else cout << jugador2->obtenerNombre() << " gano la batalla con " << hpJugador2 << " de vida restante. \n";

    }

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

        // Opcion jugador 1 

        // Opcion jugador 2

        // Calcular el resultado

        // Mostrar el ganador



    }


}
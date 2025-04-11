#include "Batalla.h"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej3/PersonajeFactory.h"

int main() {

    // Numeros aleatoreos
    PersonajeFactory::inicializarRandom();

    auto jugador1 = PersonajeFactory::crearPersonaje("Caballero");
    auto jugador2 = PersonajeFactory::crearPersonaje("Brujo");

    // Iniciar la batalla
    Batalla batalla(jugador1, jugador2);
    batalla.iniciar();

    return 0;
}




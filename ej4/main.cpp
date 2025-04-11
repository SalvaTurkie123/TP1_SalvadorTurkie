#include "Batalla.h"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej3/PersonajeFactory.h"

int main() {

    // Numeros aleatoreos
    PersonajeFactory::inicializarRandom();

    // Lista de personajes disponibles
    vector<string> personajesDisponibles = {
        "Hechicero", "Conjurador", "Brujo", "Nigromante", // Magos
        "Barbaro", "Caballero", "Gladiador", "Mercenario", "Paladin" // Guerreros
    };

    cout << "Elige un personaje:\n";
    for (size_t i = 0; i < personajesDisponibles.size(); ++i) {
        cout << i + 1 << ": " << personajesDisponibles[i] << "\n";
    }

//------------------------------------------------------------------------------------------

    // Elegir personaje
    int opcionPersonaje;
    cin >> opcionPersonaje;
    while (opcionPersonaje < 1 || opcionPersonaje > personajesDisponibles.size()) {
        cout << "Opción inválida. Elige un número entre 1 y " << personajesDisponibles.size() << ": ";
        cin >> opcionPersonaje;
    }
    string personajeElegido = personajesDisponibles[opcionPersonaje - 1];
    auto jugador1 = PersonajeFactory::crearPersonaje(personajeElegido);
    cout << "Has elegido al personaje: " << jugador1->obtenerNombre() << ".\n";

    // Lista de armas disponibles según el tipo de personaje
    vector<string> armasDisponibles;
    if (opcionPersonaje <= 4) { // Magos
        armasDisponibles = {"Baston", "LibroHechizos", "Pocion", "Amuleto"};
    } else { // Guerreros
        armasDisponibles = {"Espada", "Garrote", "HachaSimple", "HachaDoble", "Lanza"};
    }

    // Mostrar armas disponibles
    cout << "Elige un arma para tu personaje:\n";
    for (size_t i = 0; i < armasDisponibles.size(); ++i) {
        cout << i + 1 << ": " << armasDisponibles[i] << "\n";
    }

    // Elegir arma
    int opcionArma;
    cin >> opcionArma;
    while (opcionArma < 1 || opcionArma > armasDisponibles.size()) {
        cout << "Opción inválida. Elige un número entre 1 y " << armasDisponibles.size() << ": ";
        cin >> opcionArma;
    }
    string armaElegida = armasDisponibles[opcionArma - 1];
    auto armaJugador1 = PersonajeFactory::crearArma(armaElegida);
    jugador1->agregarArma(armaJugador1);
    cout << "Has elegido el arma: " << armaJugador1->obtenerNombre() << ".\n";

//------------------------------------------------------------------------------------------

    // Crear personaje y arma para el jugador 2 (aleatorio)
    vector<string> personajesAleatorios = personajesDisponibles;
    string personajeAleatorio = personajesAleatorios[PersonajeFactory::generarNumeroAleatorio(0, personajesAleatorios.size() - 1)];
    auto jugador2 = PersonajeFactory::crearPersonaje(personajeAleatorio);
    vector<string> armasAleatorias = (personajeAleatorio == "Hechicero" || personajeAleatorio == "Conjurador" || personajeAleatorio == "Brujo" || personajeAleatorio == "Nigromante")
                                         ? vector<string>{"Baston", "LibroHechizos", "Pocion", "Amuleto"}
                                         : vector<string>{"Espada", "Garrote", "HachaSimple", "HachaDoble", "Lanza"};
    string armaAleatoria = armasAleatorias[PersonajeFactory::generarNumeroAleatorio(0, armasAleatorias.size() - 1)];
    auto armaJugador2 = PersonajeFactory::crearArma(armaAleatoria);
    jugador2->agregarArma(armaJugador2);
    cout << "El jugador 2 ha elegido al personaje: " << jugador2->obtenerNombre() << " con el arma: " << armaJugador2->obtenerNombre() << ".\n";


    // Iniciar la batalla
    Batalla batalla(jugador1, jugador2);
    batalla.iniciar();

    return 0;
}


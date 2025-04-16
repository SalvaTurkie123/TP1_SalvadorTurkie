#include "Batalla.h"
#include "../ej2/PersonajeFactory.h"

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

    // Elegir personaje
    long unsigned int opcionPersonaje;
    cin >> opcionPersonaje;
    while (opcionPersonaje < 1 || opcionPersonaje > personajesDisponibles.size()) {
        cout << "Opción inválida. Elige un número entre 1 y " << personajesDisponibles.size() << ": ";
        cin >> opcionPersonaje;
    }
    string personajeElegido = personajesDisponibles[opcionPersonaje - 1];
    auto jugador1 = PersonajeFactory::crearPersonaje(personajeElegido);
    cout << "Has elegido al personaje: " << jugador1->obtenerNombre() << ".\n";

     // Lista de todas las armas disponibles
     vector<string> armasDisponibles = {
        "Espada", "Garrote", "HachaSimple", "HachaDoble", "Lanza", // Armas de combate
        "Baston", "LibroHechizos", "Pocion", "Amuleto"             // Armas mágicas
    };

    // Mostrar armas disponibles con su daño
    cout << "Elige un arma para tu personaje (se muestra el daño adicional que provoca cada arma):\n";
    for (size_t i = 0; i < armasDisponibles.size(); ++i) {
        auto armaTemporal = PersonajeFactory::crearArma(armasDisponibles[i]); // Crear un arma temporal para obtener su daño
        cout << i + 1 << ": " << armasDisponibles[i] << " (Daño adicional: " << armaTemporal->obtenerDanio() << ")\n";
    }

    // Elegir arma
    long unsigned int opcionArma;
    cin >> opcionArma;
    while (opcionArma < 1 || opcionArma > armasDisponibles.size()) {
        cout << "Opción inválida. Elige un número entre 1 y " << armasDisponibles.size() << ": ";
        cin >> opcionArma;
    }
    string armaElegida = armasDisponibles[opcionArma - 1];
    jugador1->agregarArma(PersonajeFactory::crearArma(armaElegida));

    // Crear personaje y arma para el jugador 2 (aleatorio)
    string personajeAleatorio = personajesDisponibles[PersonajeFactory::generarNumeroAleatorio(0, personajesDisponibles.size() - 1)];
    auto jugador2 = PersonajeFactory::crearPersonaje(personajeAleatorio);
    string armaAleatoria = armasDisponibles[PersonajeFactory::generarNumeroAleatorio(0, armasDisponibles.size() - 1)];
    jugador2->agregarArma(PersonajeFactory::crearArma(armaAleatoria));

    // Mostrar información del jugador 2
    const auto& armasJ2 = jugador2->obtenerArmas();
    cout << "El jugador 2 ha elegido al personaje: " << jugador2->obtenerNombre() 
         << " con el arma: " << (armasJ2.empty() ? "sin arma" : armasJ2[0]->obtenerNombre()) << ".\n";

    // Iniciar la batalla
    Batalla batalla(std::move(jugador1), std::move(jugador2));
    batalla.iniciar();

    return 0;
}
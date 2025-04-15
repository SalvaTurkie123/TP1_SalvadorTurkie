#include <iostream>
#include <vector>
#include <memory>
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/PersonajeFactory.h"

using namespace std;

int main() {
    // Inicializar el generador de números aleatorios
    PersonajeFactory::inicializarRandom();

    // Crear personajes utilizando PersonajeFactory
    vector<shared_ptr<IPersonaje>> personajes;
    personajes.push_back(PersonajeFactory::crearPersonaje("Hechicero"));
    personajes.push_back(PersonajeFactory::crearPersonaje("Conjurador"));
    personajes.push_back(PersonajeFactory::crearPersonaje("Brujo"));
    personajes.push_back(PersonajeFactory::crearPersonaje("Nigromante"));
    personajes.push_back(PersonajeFactory::crearPersonaje("Barbaro"));
    personajes.push_back(PersonajeFactory::crearPersonaje("Caballero"));
    personajes.push_back(PersonajeFactory::crearPersonaje("Gladiador"));
    personajes.push_back(PersonajeFactory::crearPersonaje("Mercenario"));
    personajes.push_back(PersonajeFactory::crearPersonaje("Paladin"));

    // Crear más armas utilizando PersonajeFactory
    vector<shared_ptr<IArma>> armas;
    armas.push_back(PersonajeFactory::crearArma("Espada"));
    armas.push_back(PersonajeFactory::crearArma("Garrote"));
    armas.push_back(PersonajeFactory::crearArma("Baston"));
    armas.push_back(PersonajeFactory::crearArma("Amuleto"));
    armas.push_back(PersonajeFactory::crearArma("HachaSimple"));
    armas.push_back(PersonajeFactory::crearArma("HachaDoble"));
    armas.push_back(PersonajeFactory::crearArma("Lanza"));
    armas.push_back(PersonajeFactory::crearArma("LibroHechizos"));
    armas.push_back(PersonajeFactory::crearArma("Pocion"));

    // Asignar armas a los personajes
    for (size_t i = 0; i < personajes.size(); ++i) {
        personajes[i]->agregarArma(armas[i % armas.size()]);
    }

    // Imprimir personajes y sus armas
    cout << "Personajes creados:\n";
    for (const auto& personaje : personajes) {
        cout << " - " << personaje->obtenerNombre() << " (Nivel: " << personaje->obtenerNivel() << ", Vida: " << personaje->obtenerVida() << ")\n";
        cout << "   Armas:\n";
        for (const auto& arma : personaje->obtenerArmas()) {
            cout << "     * " << arma->obtenerNombre() << " (" << arma->obtenerRareza() << ", Daño: " << arma->obtenerDanio() << ")\n";
        }
    }

    return 0;
}
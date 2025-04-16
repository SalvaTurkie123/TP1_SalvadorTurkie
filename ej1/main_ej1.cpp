#include <iostream>
#include <vector>
#include <memory>
#include "../ej2/PersonajeFactory.h"

using namespace std;

int main() {
    // Inicializar el generador de números aleatorios
    PersonajeFactory::inicializarRandom();

    // Crear personajes utilizando PersonajeFactory
    vector<unique_ptr<IPersonaje>> personajes;
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
    vector<unique_ptr<IArma>> armas;
    armas.push_back(PersonajeFactory::crearArma("Espada"));
    armas.push_back(PersonajeFactory::crearArma("Garrote"));
    armas.push_back(PersonajeFactory::crearArma("Baston"));
    armas.push_back(PersonajeFactory::crearArma("Amuleto"));
    armas.push_back(PersonajeFactory::crearArma("HachaSimple"));
    armas.push_back(PersonajeFactory::crearArma("HachaDoble"));
    armas.push_back(PersonajeFactory::crearArma("Lanza"));
    armas.push_back(PersonajeFactory::crearArma("LibroHechizos"));
    armas.push_back(PersonajeFactory::crearArma("Pocion"));

    // Asignar armas a los personajes (0, 1 o 2 armas)
    for (size_t i = 0; i < personajes.size(); ++i) {
        int cantidadArmas = PersonajeFactory::generarNumeroAleatorio(0, 2);
        for (int j = 0; j < cantidadArmas; ++j) {
            int indiceArma = PersonajeFactory::generarNumeroAleatorio(0, armas.size() - 1);
            // Transferimos la propiedad del arma al personaje usando std::move
            if (!armas.empty()) {
                personajes[i]->agregarArma(std::move(armas[indiceArma]));
                // Removemos el arma del vector ya que fue transferida
                armas.erase(armas.begin() + indiceArma);
            }
        }
    }

    // Imprimir personajes y sus armas
    cout << "=============================\n";
    cout << "     Personajes creados      \n";
    cout << "=============================\n";

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

    cout << "\n=============================\n";
    cout << "       Fin de la lista       \n";
    cout << "=============================\n";
}
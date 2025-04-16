#pragma once
#include <memory>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include "../ej1/Personajes/Personaje.h"
#include "../ej1/Armas/Arma.h"

using namespace std;

class PersonajeFactory {
public:
    // Método para inicializar el generador de números aleatorios
    static void inicializarRandom();

    // Método para generar un número aleatorio en un rango
    static int generarNumeroAleatorio(int min, int max);

    // Método para crear un personaje dinámicamente
    static unique_ptr<IPersonaje> crearPersonaje(const string& tipo);

    // Método para crear un arma dinámicamente
    static unique_ptr<IArma> crearArma(const string& tipo);

    // Método para crear un personaje armado
    static unique_ptr<IPersonaje> crearPersonajeArmado(const string& tipoPersonaje, int cantidadArmas);

    // Nuevo método para generar personajes con armas
    static vector<unique_ptr<IPersonaje>> generarPersonajesConArmas();

};
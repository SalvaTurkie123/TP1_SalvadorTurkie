#pragma once
#include <memory>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Personaje.h"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/Arma.h"

using namespace std;

class PersonajeFactory {
public:
    // Método para inicializar el generador de números aleatorios
    static void inicializarRandom();

    // Método para generar un número aleatorio en un rango
    static int generarNumeroAleatorio(int min, int max);

    // Método para crear un personaje dinámicamente
    static shared_ptr<IPersonaje> crearPersonaje(const string& tipo);

    // Método para crear un arma dinámicamente
    static shared_ptr<IArma> crearArma(const string& tipo);

    // Método para crear un personaje armado
    static shared_ptr<IPersonaje> crearPersonajeArmado(const string& tipoPersonaje, int cantidadArmas);

    // Nuevo método para generar personajes con armas
    static vector<shared_ptr<IPersonaje>> generarPersonajesConArmas();

};
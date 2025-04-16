#include <iostream>
#include <vector>

#include "PersonajeFactory.h"
#include "../ej1/Personajes/Magos/Hechicero.h"
#include "../ej1/Personajes/Magos/Conjurador.h"
#include "../ej1/Personajes/Magos/Brujo.h"
#include "../ej1/Personajes/Magos/Nigromante.h"
#include "../ej1/Personajes/Guerreros/Barbaro.h"
#include "../ej1/Personajes/Guerreros/Caballero.h"
#include "../ej1/Personajes/Guerreros/Gladiador.h"
#include "../ej1/Personajes/Guerreros/Mercenario.h"
#include "../ej1/Personajes/Guerreros/Paladin.h"

#include "../ej1/Armas/ArmasCombate/ArmaCombate.h"
#include "../ej1/Armas/ArmasCombate/Espada.h"
#include "../ej1/Armas/ArmasCombate/Garrote.h"
#include "../ej1/Armas/ArmasCombate/HachaSimple.h"
#include "../ej1/Armas/ArmasCombate/HachaDoble.h"
#include "../ej1/Armas/ArmasCombate/Lanza.h"
#include "../ej1/Armas/ItemsMagicos/ItemMagico.h"
#include "../ej1/Armas/ItemsMagicos/Baston.h"
#include "../ej1/Armas/ItemsMagicos/LibroHechizos.h"
#include "../ej1/Armas/ItemsMagicos/Pocion.h"
#include "../ej1/Armas/ItemsMagicos/Amuleto.h"

void PersonajeFactory::inicializarRandom() {
    // Inicializa el generador de números aleatorios con la hora actual
    srand(static_cast<unsigned int>(time(nullptr)));
}

int PersonajeFactory::generarNumeroAleatorio(int min, int max) {
    // Genera un número aleatorio en el rango [min, max]
    return rand() % (max - min + 1) + min;
}

// Método para crear un personaje dinámicamente
/*Creación de personajes: El método crearPersonaje recibe un tipo de personaje como parámetro y devuelve un puntero a un objeto del tipo solicitado*/
unique_ptr<IPersonaje> PersonajeFactory::crearPersonaje(const string& tipo) {
    if (tipo == "Hechicero") {
        return make_unique<Hechicero>("Hechicero", 1, 100, 50, "Fuego");
    } else if (tipo == "Conjurador") {
        return make_unique<Conjurador>("Conjurador", 1, 100, 50, "Invocación");
    } else if (tipo == "Brujo") {
        return make_unique<Brujo>("Brujo", 1, 100, 50, "Oscuridad");
    } else if (tipo == "Nigromante") {
        return make_unique<Nigromante>("Nigromante", 1, 100, 50, "Necromancia");
    } else if (tipo == "Barbaro") {
        return make_unique<Barbaro>("Barbaro", 1, 150, 70, "Hacha");
    } else if (tipo == "Caballero") {
        return make_unique<Caballero>("Caballero", 1, 120, 60, "Espada");
    } else if (tipo == "Gladiador") {
        return make_unique<Gladiador>("Gladiador", 1, 130, 65, "Lanza");
    } else if (tipo == "Mercenario") {
        return make_unique<Mercenario>("Mercenario", 1, 110, 55, "Garrote");
    } else if (tipo == "Paladin") {
        return make_unique<Paladin>("Paladin", 1, 140, 60, "Martillo");
    } else {
        throw invalid_argument("Tipo de personaje no reconocido: " + tipo);
    }
}

// Método para crear un arma dinámicamente
/*Creación de armas: El método crearArma funciona de manera similar, devolviendo un puntero a un arma del tipo solicitado*/
unique_ptr<IArma> PersonajeFactory::crearArma(const string& tipo) {
    if (tipo == "Espada") {
        return make_unique<Espada>("Espada", 50, 5.0, "Rara", "Acero");
    } else if (tipo == "Garrote") {
        return make_unique<Garrote>("Garrote", 30, 4.0, "Común", "Madera");
    } else if (tipo == "HachaSimple") {
        return make_unique<HachaSimple>("Hacha Simple", 40, 6.0, "Común", "Hierro");
    } else if (tipo == "HachaDoble") {
        return make_unique<HachaDoble>("Hacha Doble", 60, 8.0, "Épica", "Acero");
    } else if (tipo == "Lanza") {
        return make_unique<Lanza>("Lanza", 45, 5.5, "Rara", "Acero");
    } else if (tipo == "Baston") {
        return make_unique<Baston>("Baston", 20, 3.0, "Común", "Madera");
    } else if (tipo == "LibroHechizos") {
        return make_unique<LibroHechizos>("Libro de Hechizos", 35, 2.5, "Raro", "Papel");
    } else if (tipo == "Pocion") {
        return make_unique<Pocion>("Poción", 0, 1.0, "Común", "Cristal");
    } else if (tipo == "Amuleto") {
        return make_unique<Amuleto>("Amuleto", 10, 0.5, "Épico", "Oro");
    } else {
        throw invalid_argument("Tipo de arma no reconocido: " + tipo);
    }
}


// Método para crear un personaje armado
/*Creación de personajes armados: El método crearPersonajeArmado combina los dos anteriores para crear un personaje con un número específico de armas*/
unique_ptr<IPersonaje> PersonajeFactory::crearPersonajeArmado(const string& tipoPersonaje, int cantidadArmas) {
    // Crear el personaje
    auto personaje = crearPersonaje(tipoPersonaje);

    // Generar las armas y asignarlas al personaje
    vector<string> tiposArmas = {"Espada", "Garrote", "HachaSimple", "HachaDoble", "Lanza", "Baston", "LibroHechizos", "Pocion", "Amuleto"};
    for (int i = 0; i < cantidadArmas; ++i) {
        int indiceArma = generarNumeroAleatorio(0, tiposArmas.size() - 1);
        personaje->agregarArma(crearArma(tiposArmas[indiceArma]));
    }

    return personaje;
}

// Método para generar personajes con armas
vector<unique_ptr<IPersonaje>> PersonajeFactory::generarPersonajesConArmas() {
    vector<unique_ptr<IPersonaje>> personajes;

    // Generar cantidad aleatoria de magos y guerreros
    int cantidadMagos = generarNumeroAleatorio(3, 7);
    int cantidadGuerreros = generarNumeroAleatorio(3, 7);

    cout << "Generando " << cantidadMagos << " magos y " << cantidadGuerreros << " guerreros." << endl;

    // Tipos de magos y guerreros disponibles
    vector<string> tiposMagos = {"Hechicero", "Conjurador", "Brujo", "Nigromante"};
    vector<string> tiposGuerreros = {"Barbaro", "Caballero", "Gladiador", "Mercenario", "Paladin"};

    // Generar magos
    for (int i = 0; i < cantidadMagos; ++i) {
        int indiceMago = generarNumeroAleatorio(0, tiposMagos.size() - 1);
        int cantidadArmas = generarNumeroAleatorio(0, 2);
        personajes.push_back(crearPersonajeArmado(tiposMagos[indiceMago], cantidadArmas));
    }

    // Generar guerreros
    for (int i = 0; i < cantidadGuerreros; ++i) {
        int indiceGuerrero = generarNumeroAleatorio(0, tiposGuerreros.size() - 1);
        int cantidadArmas = generarNumeroAleatorio(0, 2);
        personajes.push_back(crearPersonajeArmado(tiposGuerreros[indiceGuerrero], cantidadArmas));
    }

    return personajes;
}
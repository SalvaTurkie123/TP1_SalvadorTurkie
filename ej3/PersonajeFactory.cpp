#include <iostream>
#include <vector>

#include "PersonajeFactory.h"

#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Magos/Magos.h"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Magos/Hechicero.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Magos/Conjugador.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Magos/Brujo.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Magos/Nigromante.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Guerreros/Guerreros.h"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Guerreros/Barbaro.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Guerreros/Caballero.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Guerreros/Gladiador.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Guerreros/Mercenario.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Personajes/Guerreros/Paladin.cpp"

#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ArmasCombate/ArmaCombate.h"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ArmasCombate/Espada.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ArmasCombate/Garrote.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ArmasCombate/HachaSimple.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ArmasCombate/HachaDoble.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ArmasCombate/Lanza.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ItemsMagicos/ItemMagico.h"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ItemsMagicos/Baston.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ItemsMagicos/LibroHechizos.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ItemsMagicos/Pocion.cpp"
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ItemsMagicos/Amuleto.cpp"

void PersonajeFactory::inicializarRandom() {
    // Inicializa el generador de números aleatorios con la hora actual
    srand(static_cast<unsigned int>(time(nullptr)));
}

int PersonajeFactory::generarNumeroAleatorio(int min, int max) {
    // Genera un número aleatorio en el rango [min, max]
    return rand() % (max - min + 1) + min;
}

// Método para crear un personaje dinámicamente
shared_ptr<IPersonaje> PersonajeFactory::crearPersonaje(const string& tipo) {
    if (tipo == "Hechicero") {
        return make_shared<Hechicero>("Hechicero", 1, 100, 50, "Fuego");
    } else if (tipo == "Conjurador") {
        return make_shared<Conjurador>("Conjurador", 1, 100, 50, "Invocación");
    } else if (tipo == "Brujo") {
        return make_shared<Brujo>("Brujo", 1, 100, 50, "Oscuridad");
    } else if (tipo == "Nigromante") {
        return make_shared<Nigromante>("Nigromante", 1, 100, 50, "Necromancia");
    } else if (tipo == "Barbaro") {
        return make_shared<Barbaro>("Barbaro", 1, 150, 70, "Hacha");
    } else if (tipo == "Caballero") {
        return make_shared<Caballero>("Caballero", 1, 120, 60, "Espada");
    } else if (tipo == "Gladiador") {
        return make_shared<Gladiador>("Gladiador", 1, 130, 65, "Lanza");
    } else if (tipo == "Mercenario") {
        return make_shared<Mercenario>("Mercenario", 1, 110, 55, "Garrote");
    } else if (tipo == "Paladin") {
        return make_shared<Paladin>("Paladin", 1, 140, 60, "Martillo");
    } else {
        throw invalid_argument("Tipo de personaje no reconocido: " + tipo);
    }
}

// Método para crear un arma dinámicamente
shared_ptr<IArma> PersonajeFactory::crearArma(const string& tipo) {
    if (tipo == "Espada") {
        return make_shared<Espada>("Espada", 50, 5.0, "Rara", "Acero");
    } else if (tipo == "Garrote") {
        return make_shared<Garrote>("Garrote", 30, 4.0, "Común", "Madera");
    } else if (tipo == "HachaSimple") {
        return make_shared<HachaSimple>("Hacha Simple", 40, 6.0, "Común", "Hierro");
    } else if (tipo == "HachaDoble") {
        return make_shared<HachaDoble>("Hacha Doble", 60, 8.0, "Épica", "Acero");
    } else if (tipo == "Lanza") {
        return make_shared<Lanza>("Lanza", 45, 5.5, "Rara", "Acero");
    } else if (tipo == "Baston") {
        return make_shared<Baston>("Baston", 20, 3.0, "Común", "Madera");
    } else if (tipo == "LibroHechizos") {
        return make_shared<LibroHechizos>("Libro de Hechizos", 35, 2.5, "Raro", "Papel");
    } else if (tipo == "Pocion") {
        return make_shared<Pocion>("Poción", 0, 1.0, "Común", "Cristal");
    } else if (tipo == "Amuleto") {
        return make_shared<Amuleto>("Amuleto", 10, 0.5, "Épico", "Oro");
    } else {
        throw invalid_argument("Tipo de arma no reconocido: " + tipo);
    }
}


// Método para crear un personaje armado
shared_ptr<IPersonaje> PersonajeFactory::crearPersonajeArmado(const string& tipoPersonaje, int cantidadArmas) {
    // Crear el personaje
    auto personaje = crearPersonaje(tipoPersonaje);

    // Generar las armas y asignarlas al personaje
    cout << "Creando personaje armado: " << personaje->obtenerNombre() << endl;
    cout << "Cantidad de armas: " << cantidadArmas << endl;

    for (int i = 0; i < cantidadArmas; ++i) {
        // Generar un tipo de arma aleatorio
        vector<string> tiposArmas = {"Espada", "Garrote", "HachaSimple", "HachaDoble", "Lanza", "Baston", "LibroHechizos", "Pocion", "Amuleto"};
        int indiceArma = generarNumeroAleatorio(0, tiposArmas.size() - 1);
        auto arma = crearArma(tiposArmas[indiceArma]);

        // Mostrar información del arma generada
        cout << "  Arma asignada: " << arma->obtenerNombre() << " (" << arma->obtenerRareza() << ")" << endl;
    }

    return personaje;
}

// Método para generar personajes con armas
vector<shared_ptr<IPersonaje>> PersonajeFactory::generarPersonajesConArmas() {
    vector<shared_ptr<IPersonaje>> personajes;

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
        auto mago = crearPersonajeArmado(tiposMagos[indiceMago], cantidadArmas);
        personajes.push_back(mago);
    }

    // Generar guerreros
    for (int i = 0; i < cantidadGuerreros; ++i) {
        int indiceGuerrero = generarNumeroAleatorio(0, tiposGuerreros.size() - 1);
        int cantidadArmas = generarNumeroAleatorio(0, 2);
        auto guerrero = crearPersonajeArmado(tiposGuerreros[indiceGuerrero], cantidadArmas);
        personajes.push_back(guerrero);
    }

    return personajes;
}
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


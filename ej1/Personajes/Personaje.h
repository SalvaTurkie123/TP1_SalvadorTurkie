#pragma once // Directiva de preprocesador para evitar inclusiones múltiples (Todos los archivos .h deben tenerla al principio)
#include <string> // Librería para manejar cadenas de texto
#include <iostream> // Librería para manejar entrada/salida
#include <memory> // Librería para manejar punteros inteligentes
#include <vector> // Librería para manejar vectores
#include "../Armas/Arma.h"

using namespace std;

class IPersonaje {

public:
    virtual ~IPersonaje() {}

    // Métodos virtuales puros para obtener los atributos de los personajes
    virtual string obtenerNombre() const = 0;
    virtual int obtenerNivel() const = 0;
    virtual int obtenerVida() const = 0;
    virtual void atacar() const = 0;
    virtual void defender() const = 0;

    // Métodos virtuales puros para obtener y agregar armas
    virtual void agregarArma(unique_ptr<IArma> arma) = 0;
    virtual const vector<unique_ptr<IArma>>& obtenerArmas() const = 0;      
};
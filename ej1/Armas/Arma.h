#pragma once
#include <string> 

using namespace std;

class IArma {
public:

    // Constructor y destructor virtual
    virtual ~IArma() {}

    // Métodos virtuales puros para obtener los atributos de las armas
    virtual string obtenerNombre() const = 0;
    virtual int obtenerDanio() const = 0;
    virtual double obtenerPeso() const = 0;
    virtual string obtenerRareza() const = 0;
    
    virtual void usar() const = 0;
};

#pragma once
#include <string>
#include <iostream>

using namespace std;

class IPersonaje {
public:
    virtual ~IPersonaje() {}

    virtual string obtenerNombre() const = 0;
    virtual int obtenerNivel() const = 0;
    virtual int obtenerVida() const = 0;
    virtual void atacar() const = 0;
    virtual void defender() const = 0;
};
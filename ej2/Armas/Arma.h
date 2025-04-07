#pragma once
#include <string>

class IArma {
public:
    virtual ~IArma() {}

    virtual std::string obtenerNombre() const = 0;
    virtual int obtenerDanio() const = 0;
    virtual double obtenerPeso() const = 0;
    virtual std::string obtenerRareza() const = 0;
    virtual void usar() const = 0;
};

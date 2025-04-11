#pragma once
#include <string>
#include <iostream>
#include <memory>
#include <vector>
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/Arma.h"

using namespace std;

class IPersonaje {

protected:
    vector<shared_ptr<IArma>> armas; // Relación "has-a" explícita
public:
    virtual ~IPersonaje() {}

    virtual string obtenerNombre() const = 0;
    virtual int obtenerNivel() const = 0;
    virtual int obtenerVida() const = 0;
    virtual void atacar() const = 0;
    virtual void defender() const = 0;

    void agregarArma(shared_ptr<IArma> arma) {
        armas.push_back(arma); 
    }

    const vector<shared_ptr<IArma>>& obtenerArmas() const {
            return armas;
    }
};
#pragma once
#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej1/Armas/Arma.h"

using namespace std;

class ArmaMagica : public IArma {

// Atributos -> Protegidos para que las clases derivadas puedan acceder a ellos
protected:
    string nombre;
    int poderMagico;
    double peso;
    string rareza;
    string elemento;

public:

    // Constructor y destructor
    ArmaMagica(string nombre, int poderMagico, double peso, string rareza, string elemento);
    virtual ~ArmaMagica();

    // Métodos de la interfaz IArma
    string obtenerNombre() const override;
    int obtenerDanio() const override;
    double obtenerPeso() const override;
    string obtenerRareza() const override;

    // Nuevos métodos específicos de ArmaMagica
    virtual string obtenerElemento() const = 0;
};
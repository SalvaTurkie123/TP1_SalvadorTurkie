#pragma once
#include "Guerreros.h"

class Mercenario : public Guerrero {
public:
    Mercenario(string nombre, int nivel, int vida, int fuerza, string armaFavorita);

    void atacar() const override;
    void defender() const override;
    void usarHabilidadEspecial() const override;
    void mejorarArma() override;
};
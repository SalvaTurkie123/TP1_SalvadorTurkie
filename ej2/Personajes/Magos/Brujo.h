#pragma once
#include "Magos.h"

class Brujo : public Mago {
public:
    Brujo(string nombre, int nivel, int vida, int mana, string especialidad);

    void atacar() const override;
    void defender() const override;
    void lanzarHechizo() const override;
    void regenerarMana() override;
};
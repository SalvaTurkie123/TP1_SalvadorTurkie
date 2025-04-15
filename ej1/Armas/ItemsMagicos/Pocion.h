#pragma once
#include "ItemMagico.h"

class Pocion : public ArmaMagica {
public:
    Pocion(string nombre, int poderMagico, double peso, string rareza, string elemento);
    string obtenerElemento() const override;
    void usar() const override;
};
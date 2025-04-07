#pragma once
#include "ItemMagico.h"
#include <iostream>

class Amuleto : public ArmaMagica {
public:
    Amuleto(string nombre, int poderMagico, double peso, string rareza, string elemento);

    string obtenerElemento() const override;
    void usar() const override;
};
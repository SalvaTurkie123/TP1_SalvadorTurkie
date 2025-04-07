#pragma once
#include "ItemMagico.h"
#include <iostream>

class Baston : public ArmaMagica {
public:
    Baston(string nombre, int poderMagico, double peso, string rareza, string elemento);

    string obtenerElemento() const override;
    void usar() const override;
};
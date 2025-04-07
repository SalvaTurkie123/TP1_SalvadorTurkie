#pragma once
#include "ItemMagico.h"
#include <iostream>

class LibroHechizos : public ArmaMagica {
public:
    LibroHechizos(string nombre, int poderMagico, double peso, string rareza, string elemento);

    string obtenerElemento() const override;
    void usar() const override;
};
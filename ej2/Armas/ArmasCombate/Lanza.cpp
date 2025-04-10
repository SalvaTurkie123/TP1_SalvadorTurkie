#include "/root/PARADIGMAS/TPS/TP1_SalvadorTurkie/ej2/Armas/ArmasCombate/ArmaCombate.h"
#include <iostream>
#include <string>

using namespace std;

class Lanza : public ArmaCombate {
public:
    Lanza(string nombre, int danioFisico, double peso, string rareza, string material)
        : ArmaCombate(nombre, danioFisico, peso, rareza, material) {}

    string obtenerMaterial() const override {
        return material;
    }

    void usar() const override {
        cout << "Usando la lanza para atacar a distancia." << endl;
    }
};
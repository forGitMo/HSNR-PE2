#include "Fahrzeug.h"
#include <iostream>

Fahrzeug::Fahrzeug(const std::string& marke, int baujahr)
        : marke(marke), baujahr(baujahr) {}

Fahrzeug::~Fahrzeug() {}

void Fahrzeug::display() const {
    std::cout << "Marke: " << marke << ", Baujahr: " << baujahr << std::endl;
}
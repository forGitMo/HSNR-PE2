#ifndef FAHRZEUGE_FAHRZEUG_H
#define FAHRZEUGE_FAHRZEUG_H

#include <string>

using namespace std;

class Fahrzeug {
public:
    Fahrzeug(const std::string& marke, int baujahr);
    virtual ~Fahrzeug();

    void display() const;

protected:
    std::string marke;
    int baujahr;
};

#endif


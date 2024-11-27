#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>

class Persona {
protected:
    std::string nombre;
    int edad;

public:
    Persona(const std::string& nombre, int edad);
    virtual void mostrarInformacion() const;
    virtual ~Persona() {}
};

#endif

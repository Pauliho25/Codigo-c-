#ifndef AUTOR_H
#define AUTOR_H

#include "Persona.h"

class Autor : public Persona {
private:
    std::string nacionalidad;

public:
    Autor(const std::string& nombre, int edad, const std::string& nacionalidad);
    void mostrarInformacion() const override;
    std::string obtenerNombre() const;
};

#endif // AUTOR_H

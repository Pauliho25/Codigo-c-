#ifndef SECCION_H
#define SECCION_H

#include <vector>
#include <string>
#include "Libro.h"

class Seccion {
private:
    std::string nombreSeccion;
    std::vector<Libro> libros;

public:
    Seccion(const std::string& nombreSeccion);
    void agregarLibro(const Libro& libro);
    void mostrarInformacion() const;
};

#endif // SECCION_H

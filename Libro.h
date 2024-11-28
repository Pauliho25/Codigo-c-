#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include "Autor.h"

class Libro {
private:
    std::string titulo;
    Autor autor;

public:
    Libro(const std::string& titulo, const Autor& autor);
    void mostrarInformacion() const;
    std::string obtenerTitulo() const;
};

#endif // LIBRO_H

#include "Libro.h"

Libro::Libro(const std::string& titulo, const Autor& autor) : titulo(titulo), autor(autor) {}

void Libro::mostrarInformacion() const {
    std::cout << "Libro: " << titulo << std::endl;
    autor.mostrarInformacion();
}

std::string Libro::obtenerTitulo() const {
    return titulo;
}

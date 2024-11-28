#include "Seccion.h"

Seccion::Seccion(const std::string& nombreSeccion) : nombreSeccion(nombreSeccion) {}

void Seccion::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}

void Seccion::mostrarInformacion() const {
    std::cout << "Seccion: " << nombreSeccion << std::endl;
    for (const auto& libro : libros) {
        libro.mostrarInformacion();
        std::cout << "------------------" << std::endl;
    }
}

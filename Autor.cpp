#include "Autor.h"

Autor::Autor(const std::string& nombre, int edad, const std::string& nacionalidad)
    : Persona(nombre, edad), nacionalidad(nacionalidad) {}

void Autor::mostrarInformacion() const {
    std::cout << "Autor: " << nombre << ", Edad: " << edad
              << ", Nacionalidad: " << nacionalidad << std::endl;
}

std::string Autor::obtenerNombre() const {
    return nombre;
}

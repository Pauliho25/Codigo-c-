#include "Persona.h"

Persona::Persona(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}

void Persona::mostrarInformacion() const {
    std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
}

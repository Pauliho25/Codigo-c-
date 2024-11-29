#include "Cliente.h"

Cliente::Cliente(const std::string& nombre, const std::string& email, const std::string& direccion)
    : Usuario(nombre, email), direccion(direccion) {}

void Cliente::mostrarInformacion() const {
    Usuario::mostrarInformacion();
    std::cout << "Direccion: " << direccion << std::endl;
}

#include "Usuario.h"

Usuario::Usuario(const std::string& nombre, const std::string& email) : nombre(nombre), email(email) {}

void Usuario::mostrarInformacion() const {
    std::cout << "Usuario: " << nombre << ", Email: " << email << std::endl;
}

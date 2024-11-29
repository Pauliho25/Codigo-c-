#ifndef CLIENTE_H
#define CLIENTE_H

#include "Usuario.h"

class Cliente : public Usuario {
private:
    std::string direccion;

public:
    Cliente(const std::string& nombre, const std::string& email, const std::string& direccion);
    void mostrarInformacion() const override;
};

#endif

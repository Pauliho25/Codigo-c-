#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>

class Usuario {
protected:
    std::string nombre;
    std::string email;

public:
    Usuario(const std::string& nombre, const std::string& email);
    virtual void mostrarInformacion() const;
    virtual ~Usuario() {}
};

#endif

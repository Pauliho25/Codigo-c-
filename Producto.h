#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

class Producto {
private:
    std::string nombre;
    double precio;

public:
    Producto(const std::string& nombre, double precio);
    void mostrarInformacion() const;
    double obtenerPrecio() const;
};

#endif

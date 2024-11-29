#include "Producto.h"

Producto::Producto(const std::string& nombre, double precio) : nombre(nombre), precio(precio) {}

void Producto::mostrarInformacion() const {
    std::cout << "Producto: " << nombre << ", Precio: $" << precio << std::endl;
}

double Producto::obtenerPrecio() const {
    return precio;
}

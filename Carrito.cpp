#include "Carrito.h"

void Carrito::agregarProducto(const Producto& producto) {
    productos.push_back(producto);
}

void Carrito::mostrarCarrito() const {
    std::cout << "Carrito de compras:" << std::endl;
    for (const auto& producto : productos) {
        producto.mostrarInformacion();
    }
}

double Carrito::calcularTotal() const {
    double total = 0;
    for (const auto& producto : productos) {
        total += producto.obtenerPrecio();
    }
    return total;
}

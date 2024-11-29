#include "Transaccion.h"

Transaccion::Transaccion(const Cliente& cliente, const Carrito& carrito)
    : cliente(cliente), carrito(carrito) {}

void Transaccion::mostrarDetalles() const {
    std::cout << "Detalles de la Transaccion:" << std::endl;
    cliente.mostrarInformacion();
    carrito.mostrarCarrito();
    std::cout << "Total: $" << carrito.calcularTotal() << std::endl;
}

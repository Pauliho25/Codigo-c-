#ifndef CARRITO_H
#define CARRITO_H

#include <vector>
#include "Producto.h"

class Carrito {
private:
    std::vector<Producto> productos;

public:
    void agregarProducto(const Producto& producto);
    void mostrarCarrito() const;
    double calcularTotal() const;
};

#endif

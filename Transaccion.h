#ifndef TRANSACCION_H
#define TRANSACCION_H

#include "Cliente.h"
#include "Carrito.h"

class Transaccion {
private:
    Cliente cliente;
    Carrito carrito;

public:
    Transaccion(const Cliente& cliente, const Carrito& carrito);
    void mostrarDetalles() const;
};

#endif

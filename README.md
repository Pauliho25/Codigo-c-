# Sistema de Comercio Electrónico para PYMEs

## Descripción

Este proyecto es una aplicación sencilla de comercio electrónico desarrollada en **C++**, diseñada para ayudar a las pequeñas y medianas empresas (PYMEs) a iniciarse en el comercio digital. El objetivo es proporcionar una base funcional para gestionar clientes, productos y transacciones, mientras se aprende sobre conceptos fundamentales de programación orientada a objetos (POO).

---

## ¿Qué Hace?

1. **Gestiona Clientes**:
   - Permite registrar clientes con su nombre, correo electrónico y dirección.

2. **Manejo de Productos**:
   - Modela productos con atributos como nombre y precio.

3. **Carrito de Compras**:
   - Los clientes pueden agregar productos a un carrito y calcular el costo total.

4. **Transacciones**:
   - Genera un resumen detallado de cada compra, mostrando al cliente, los productos y el total a pagar.

---

## ¿Cómo Funciona?

### Clases Principales:

- **Usuario**:
  Clase base que almacena información básica de un usuario.

- **Cliente**:
  Extiende la clase `Usuario` y añade una dirección específica.

- **Producto**:
  Modela un artículo disponible para la venta con nombre y precio.

- **Carrito**:
  Permite a los clientes agregar varios productos y calcular el total de la compra.

- **Transaccion**:
  Une al cliente y su carrito, proporcionando detalles de la compra.

---

## ¿Cómo Ejecutarlo?

1. Compila el programa utilizando un compilador de C++ compatible con C++11:
   ```bash
   g++ -std=c++11 -o ecommerce main.cpp Usuario.cpp Cliente.cpp Producto.cpp Carrito.cpp Transaccion.cpp
2. Ejecuta el programa:
   ```bash
   ./ecommerce


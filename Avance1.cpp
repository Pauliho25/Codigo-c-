#include <iostream>
#include <string>

using namespace std;

class Producto {
public:
    string nombre;
    double precio;

    Producto(string n, double p) : nombre(n), precio(p) {}

    void mostrar() {
        cout << "Producto: " << nombre << ", Precio: $" << precio << endl;
    }
};

class Cliente {
public:
    string nombre;
    string email;

    Cliente(string n, string e) : nombre(n), email(e) {}

    void mostrar() {
        cout << "Cliente: " << nombre << ", Email: " << email << endl;
    }
};

class Carrito {
public:
    double total = 0;

    void agregar(Producto producto) {
        total += producto.precio;
        cout << "Agregado al carrito: " << producto.nombre << endl;
    }

    void mostrarTotal() {
        cout << "Total del carrito: $" << total << endl;
    }
};

int main() {
    Cliente cliente("Juan Perez", "juan.perez@example.com");
    cliente.mostrar();

    Producto producto1("Laptop", 1200.00);
    Producto producto2("Mouse", 25.00);

    Carrito carrito;
    carrito.agregar(producto1);
    carrito.agregar(producto2);

    carrito.mostrarTotal();

    return 0;
}

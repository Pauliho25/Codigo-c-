#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Producto {
public:
    string nombre;
    double precio;
    string categoria; 

    Producto(string n, double p, string c) : nombre(n), precio(p), categoria(c) {}

    void mostrar() {
        cout << "Producto: " << nombre << ", Precio: $" << precio << ", Categoría: " << categoria << endl;
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
    vector<Producto> productos;

    void agregar(Producto producto) {
        productos.push_back(producto);
        cout << "Agregado al carrito: " << producto.nombre << endl;
    }

    void mostrarProductos() {
        cout << "Contenido del carrito:" << endl;
        for (const auto& producto : productos) {
            producto.mostrar();
        }
    }

    void mostrarTotal() {
        double total = 0;
        for (const auto& producto : productos) {
            total += producto.precio;
        }
        cout << "Total del carrito: $" << total << endl;
    }
};

int main() {
    Cliente cliente("Juan Perez", "juan.perez@example.com");
    cliente.mostrar();
    cout << endl;

    Producto producto1("Laptop", 1200.00, "Electrónica");
    Producto producto2("Mouse", 25.00, "Accesorios");

    Carrito carrito;
    carrito.agregar(producto1);
    carrito.agregar(producto2);

    cout << endl;
    carrito.mostrarProductos();

    cout << endl;
    carrito.mostrarTotal();

    return 0;
}

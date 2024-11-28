#include "PERSONA.h"
#include "autor.h"
#include "Libro.h"
#include "Seccion.h"

int main() {
    // Crear autores
    Autor autor1("Gabriel Garcia Marquez", 87, "Colombiano");
    Autor autor2("J.K. Rowling", 55, "Británica");

    // Crear libros
    Libro libro1("Cien años de soledad", autor1);
    Libro libro2("Harry Potter y la piedra filosofal", autor2);

    // Crear secciones
    Seccion seccion1("Ficción");
    Seccion seccion2("Fantasía");

    // Agregar libros a las secciones
    seccion1.agregarLibro(libro1);
    seccion2.agregarLibro(libro2);

    // Mostrar información de las secciones
    seccion1.mostrarInformacion();
    std::cout << "======================" << std::endl;
    seccion2.mostrarInformacion();

    return 0;
}

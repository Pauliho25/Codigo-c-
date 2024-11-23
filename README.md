# Sistema de Biblioteca

## Descripción

Un sistema básico de gestión de bibliotecas en **C++**. Este proyecto sirve como base para ampliar y personalizar las busquedas bibliotecarias. 

---

## Características

- **Clases y Herencia**: `Persona` (base) y `Autor` (hereda de `Persona`).
- **Composición**: Los libros (`Libro`) contienen un autor.
- **Agregación**: Las secciones (`Seccion`) gestionan listas de libros.
- Organización temática de libros.

---

## Ejecución

1. Compilar:
   ```bash
   g++ -o sistema_biblioteca main.cpp
   ```
2. Ejecutar:
   ```bash
   ./sistema_biblioteca
   ```

---

## Ejemplo de Salida

```
Seccion: Ficción
Libro: Cien años de soledad
Autor: Gabriel Garcia Marquez, Edad: 87, Nacionalidad: Colombiano
------------------
Seccion: Fantasia
Libro: Harry Potter y la piedra filosofal
Autor: J.K. Rowling, Edad: 55, Nacionalidad: Británica
```

---

## Ampliaciones Sugeridas

- Búsqueda de libros por autor o título.
- Guardar y cargar datos desde un archivo.
- Crear una interfaz interactiva basada en menús.

---

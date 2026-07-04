# Laboratorio 6

Laboratorio de Programacion Bajo Plataformas Abiertas.

## Contenido del repositorio

- `src/main.c`: contiene el programa principal y las pruebas de ordenamiento.
- `src/person.c`: contiene la implementacion de las funciones para imprimir, copiar y ordenar personas.
- `include/person.h`: contiene la definicion de la estructura `Person` y los prototipos de funciones.
- `Makefile`: automatiza la compilacion del proyecto.
- `.gitignore`: evita subir archivos generados como `.o` y `.exe`.
- `README.md`: describe el repositorio y los pasos de compilacion y ejecucion.

## Estructura Person

Cada persona contiene:
- `name[50]`: nombre de la persona.
- `age`: edad de la persona.
- `height`: altura de la persona en centimetros.

## Ordenamientos implementados

El programa implementa tres ordenamientos usando `qsort`:
- `compare_by_name`: ordena alfabeticamente por nombre.
- `compare_by_age`: ordena por edad de menor a mayor.
- `compare_by_height`: ordena por altura de menor a mayor.

## Compilar en Windows con MinGW

```powershell
mingw32-make
```

## Ejecutar en Windows PowerShell

```powershell
.\main.exe
```

## Limpiar archivos generados

```powershell
mingw32-make clean
```

## Compilar manualmente

```powershell
gcc -Wall -Wextra -std=c11 -Iinclude src/main.c src/person.c -o main.exe
```

## Autor

Fabian Campos Navarro

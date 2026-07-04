#include <stdio.h>
#include "person.h"

#define CANTIDAD_PERSONAS 5

void probar_ordenamientos(void);

int main(void) {
    printf("Laboratorio 6 - Ordenamiento con qsort y punteros a funciones\n");
    probar_ordenamientos();
    return 0;
}

void probar_ordenamientos(void) {
    Person personas_originales[CANTIDAD_PERSONAS] = {
        {"Carlos", 22, 172.5},
        {"Ana", 19, 165.2},
        {"Fabian", 21, 178.0},
        {"Beatriz", 25, 160.8},
        {"Daniel", 20, 181.3}
    };

    Person personas_ordenadas[CANTIDAD_PERSONAS];
    printf("\n=== ARREGLO ORIGINAL ===\n");
    imprimir_personas(personas_originales, CANTIDAD_PERSONAS);
    copiar_personas(personas_ordenadas, personas_originales, CANTIDAD_PERSONAS);
    ordenar_personas(personas_ordenadas, CANTIDAD_PERSONAS, compare_by_name);
    printf("\n=== ORDENADO POR NOMBRE ===\n");
    imprimir_personas(personas_ordenadas, CANTIDAD_PERSONAS);
    copiar_personas(personas_ordenadas, personas_originales, CANTIDAD_PERSONAS);
    ordenar_personas(personas_ordenadas, CANTIDAD_PERSONAS, compare_by_age);
    printf("\n=== ORDENADO POR EDAD ===\n");
    imprimir_personas(personas_ordenadas, CANTIDAD_PERSONAS);
    copiar_personas(personas_ordenadas, personas_originales, CANTIDAD_PERSONAS);
    ordenar_personas(personas_ordenadas, CANTIDAD_PERSONAS, compare_by_height);
    printf("\n=== ORDENADO POR ALTURA ===\n");
    imprimir_personas(personas_ordenadas, CANTIDAD_PERSONAS);
}

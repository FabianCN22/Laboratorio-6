#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

int compare_by_name(const void *primer_elemento, const void *segundo_elemento) {
    const Person *primera_persona;
    const Person *segunda_persona;

    primera_persona = (const Person *) primer_elemento;
    segunda_persona = (const Person *) segundo_elemento;
    return strcmp(primera_persona->name, segunda_persona->name);
}

int compare_by_age(const void *primer_elemento, const void *segundo_elemento) {
    const Person *primera_persona;
    const Person *segunda_persona;

    primera_persona = (const Person *) primer_elemento;
    segunda_persona = (const Person *) segundo_elemento;
    if (primera_persona->age < segunda_persona->age) {
        return -1;
    }
    if (primera_persona->age > segunda_persona->age) {
        return 1;
    }
    return 0;
}

int compare_by_height(const void *primer_elemento, const void *segundo_elemento) {
    const Person *primera_persona;
    const Person *segunda_persona;

    primera_persona = (const Person *) primer_elemento;
    segunda_persona = (const Person *) segundo_elemento;
    if (primera_persona->height < segunda_persona->height) {
        return -1;
    }
    if (primera_persona->height > segunda_persona->height) {
        return 1;
    }
    return 0;
}

void imprimir_persona(Person persona) {
    printf("%-10s Edad: %2d Altura: %.1f cm\n",
        persona.name,
        persona.age,
        persona.height);
}

void imprimir_personas(Person personas[], int cantidad_personas) {
    int indice;

    if (personas == NULL || cantidad_personas <= 0) {
        printf("No hay personas para imprimir.\n");
        return;
    }
    for (indice = 0; indice < cantidad_personas; indice++) {
        imprimir_persona(personas[indice]);
    }
}

void copiar_personas(Person destino[], Person origen[], int cantidad_personas) {
    int indice;

    if (destino == NULL || origen == NULL || cantidad_personas <= 0) {
        return;
    }
    for (indice = 0; indice < cantidad_personas; indice++) {
        destino[indice] = origen[indice];
    }
}

void ordenar_personas(Person personas[], int cantidad_personas, FuncionComparacion funcion_comparacion) {
    if (personas == NULL || cantidad_personas <= 0 || funcion_comparacion == NULL) {
        return;
    }
    qsort(personas, cantidad_personas, sizeof(Person), funcion_comparacion);
}

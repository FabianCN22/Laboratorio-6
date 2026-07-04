#ifndef PERSON_H
#define PERSON_H
#define MAX_NAME 50

typedef struct {
    char name[MAX_NAME];
    int age;
    double height;
} Person;

typedef int (*FuncionComparacion)(const void *primer_elemento, const void *segundo_elemento);

int compare_by_name(const void *primer_elemento, const void *segundo_elemento);
int compare_by_age(const void *primer_elemento, const void *segundo_elemento);
int compare_by_height(const void *primer_elemento, const void *segundo_elemento);

void imprimir_persona(Person persona);
void imprimir_personas(Person personas[], int cantidad_personas);
void copiar_personas(Person destino[], Person origen[], int cantidad_personas);
void ordenar_personas(Person personas[], int cantidad_personas, FuncionComparacion funcion_comparacion);

#endif

#include <stdio.h>
#include <stdlib.h>

#include "pila.h"

/* 
 * File:   cola.h
 * Author: jcpenya
 *
 * Created on 20 de septiembre de 2021, 15:17
 */

#ifndef COLA_H
#define COLA_H

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

typedef int TIPO_ELEMENTO;

struct NODO_COLA {
    TIPO_ELEMENTO e;
    struct NODO_COLA* siguiente;
} NODO_COLA;

typedef struct {
    NODO_COLA *frente, *final;
} COLA;
/**
 * Elimina la referencia a la cola
 * @param 
 */
void vaciar_cola(COLA*);
/**
 * Agrega al final de la cola el elemento indicado
 * @param 
 * @param 
 */
void agregar_a_cola(COLA*, TIPO_ELEMENTO);
/**
 * Extrae de la cola el primer elemento
 * @param 
 */
void sacar_de_cola(COLA*);
/**
 * Obtiene el primer elemento en la cola
 * @param c
 * @return El primer elemento en la cola
 */
TipoElemento get_primero_cola(COLA c);
/**
 * Indica si una cola está vacía o no
 * @param c
 * @return Retorna NULL en caso esté vacia, caso contrario devuelve un valor 
 * cualquiera indicando la posicion de memoria del primer elemento
 */
int cola_es_vacia(COLA c);
#endif /* COLA_H */

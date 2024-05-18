//
// Created by Fran on 17/05/2024.
//
#include "helper.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


// Función para crear un nuevo nodo
Nodo *newNodo(int codigo, char *nombre, int stock, int stockMin) {
    Nodo *aux =malloc(sizeof(Nodo));
    if (aux == NULL) {
        printf("Sin memoria\n");
        return NULL;
    }
    aux->codigo = codigo;
    strcpy(aux->nombre,nombre);
    aux->stock = stock;
    aux->stockMin = stockMin;
    aux->sig = NULL;
    return aux;
}

// Función para crear una nueva lista
Lista *newLista() {
    Lista *aux =malloc(sizeof(Lista));
    if (aux == NULL) {
        printf("Sin memoria\n");
        return NULL;
    }
    aux->cab = NULL;
    return aux;
}

// Función para agregar un producto al carrito
void agregarCarrito(Nodo *productoAingresar, Lista *lista) {
    if (lista->cab == NULL) {
        lista->cab = productoAingresar;
    } else {
        Nodo *aux = lista->cab;
        while (aux->sig != NULL) {
            aux = aux->sig;
        }
        aux->sig = productoAingresar;
    }
}

// Función para imprimir el carrito
void imprimirCarrito(Lista *lista) {
    Nodo *aux = lista->cab;
    printf("Productos:\n");
    while (aux != NULL) {
        printf("Codigo: %d\nNombre: %s\nStock: %d\nStock minimo: %d\n", aux->codigo, aux->nombre, aux->stock, aux->stockMin);
        aux = aux->sig;
    }
}
void stock_actualizado(Lista *lista)
{
    Nodo *aux=lista->cab;
    printf("Productos que estan debajos del minimo:\n");
    while(aux!=NULL)
    {
        int diferencia=aux->stockMin-aux->stock;
        printf("Producto: %s y para completar:%d\n",aux->nombre,diferencia);
        aux=aux->sig;
    }
}

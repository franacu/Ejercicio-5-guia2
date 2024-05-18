//
// Created by Fran on 17/05/2024.
//

#ifndef EJERCIO2_GUIA2_HELPER_H
#define EJERCIO2_GUIA2_HELPER_H
typedef struct nodo
{
    int codigo;
    char nombre[50];
    int stock;
    int stockMin;
    struct nodo *sig;
}Nodo;
typedef struct lista
{
    Nodo *cab;
}Lista;
Nodo *newNodo(int codigo,char *nombre,int stock,int stockMin);
Lista *newLista();
void agregarCarrito(Nodo*productoAingresar,Lista *lista);
void imprimirCarrito(Lista *lista);
void stock_actualizado(Lista *lista);

#endif //EJERCIO2_GUIA2_HELPER_H

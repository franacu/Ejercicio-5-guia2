#include "helper.h"

int main()
{
    Nodo *nodoA= newNodo(001,"Leche",10,12);
    Nodo *nodoB= newNodo(002, "queso", 6, 9);
    Lista *lista=newLista();
    agregarCarrito(nodoA,lista);
    agregarCarrito(nodoB,lista);
    imprimirCarrito(lista);
    stock_actualizado(lista);
    return 0;
}

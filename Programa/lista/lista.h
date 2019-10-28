#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "../arvore/arvore.h"

typedef struct nodeLista
{
    nodeArvore          *n;
    struct nodeLista    *proximo;
} nodeLista;

typedef struct lista
{
    nodeLista   *head;
    int         elementos;
} lista;

void insereLista(nodeLista *n, lista *l);

#endif
#ifndef LISTA_H
#define LISTA_H

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
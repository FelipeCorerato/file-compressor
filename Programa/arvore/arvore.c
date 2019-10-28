#include <stdio.h>
#include "arvore.h"

nodeArvore *novoNodeArvore(byte c, int frequencia, nodeArvore *esquerda, nodeArvore *direita)
{
    // Aloca memória
    nodeArvore *novo;

    if ( ( novo = malloc(sizeof(*novo)) ) == NULL ) return NULL;

    // Atribui na árvore os valores passados como parâmetro
    novo->c = c;
    novo->frequencia = frequencia;
    novo->esquerda = esquerda;
    novo->direita = direita;

    return novo;
}

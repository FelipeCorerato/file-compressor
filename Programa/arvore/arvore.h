#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

typedef unsigned char byte;

typedef struct nodeArvore
{
    int                 frequencia;
    byte                c;
    struct nodeArvore   *esquerda;
    struct nodeArvore   *direita;
} nodeArvore;

nodeArvore *novoNodeArvore(byte c, int frequencia, nodeArvore *esquerda, nodeArvore *direita);

#endif 
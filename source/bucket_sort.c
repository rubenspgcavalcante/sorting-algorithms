#ifndef __BUCKETSORT
#define __BUCKETSORT
#define NULL 0
#include <stdlib.h>

struct nodo{
    int dado;
    struct nodo *prox;
};


int maior(int *L, int tamanho){
    int i; 
    int k=0;
    for(i=0; i<tamanho; i++){
        if(L[i] > k){
            k = L[i];
            }
    }
    return k;
}


struct nodo *criaLista()   {
    struct nodo *q = (struct nodo *) malloc(sizeof(struct nodo));
    q->prox = NULL;
    return q;
}


void add(struct nodo *lista, int x){
        struct nodo *no = (struct nodo *) malloc(sizeof(struct nodo));
        no->prox = lista->prox;
        lista->prox = no;
        no->dado = x;
}


void ordenaLista(struct nodo *raiz){
    struct nodo *i,*j;
    struct nodo *menor;
    int aux;
    
    if(raiz->prox == NULL)
        return;
                               
    for(i = raiz->prox; i->prox != NULL;i = i->prox) {
        menor = i;
        for(j = i->prox;j != NULL;j = j->prox) {
            if(j->dado < menor->dado) 
                menor = j;
        }
        //Swap--------------------
        aux = menor->dado;
        menor->dado = i->dado;
        i->dado = aux;
        //------------------------
    }
}


void libera(struct nodo *raiz) {
    struct nodo *aux = raiz;
    while(aux != NULL)  {
        struct nodo *p = aux->prox;
        free(aux);
        aux = p;
    }
}


void bucketSort(int *L, int tamanho) {
    int i;
    int j=0;
    
    int k= maior(L,tamanho);
    struct nodo **listas = (struct nodo **) malloc(tamanho * sizeof(struct nodo *));
    struct nodo *p;
    for(i=0; i<tamanho; i++)
        listas[i] = criaLista();

    for(i=0; i<tamanho; i++){
        double x = (double)L[i]/(double)(k+1);
        x = x*tamanho;
        add(listas[(int)x], L[i]);
    }
    
    for(i=0; i<tamanho; i++){
        ordenaLista(listas[i]);
        p = listas[i]->prox;
        while(p != NULL){
            L[j] = p->dado;
            j++;
            p = p->prox;
        }
        libera(listas[i]);
    }
    return;
}

#endif
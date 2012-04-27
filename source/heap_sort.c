#ifndef __HEAPSORT
#define __HEAPSORT
#define STDERROR -1
#include <stdlib.h>

struct HBC  {
    int *V;
    int ultima;
    int tamanho;
};

struct HBC* iniciaHeap(int t){
    struct HBC *q = malloc(sizeof(struct HBC));
    q->V = malloc(t*sizeof(int));
    q->ultima = 0;
    q->tamanho = t;
    return q;
};

int insereHeap (struct HBC *H, int x) {
    int i;
    if (H->ultima == H->tamanho)
        return STDERROR;
    else  {
          H->ultima = H->ultima + 1;
          i = H->ultima;
          while (i > 1 && H->V[(int)(i/2)] > x)  {
                 H->V[i] = H->V[(int)(i/2)];
                 i = (int)(i/2);
           }
           H->V[i] = x;
    }
    return 1;
}

int removeMenor (struct HBC* H) {
    int valor, i, menor, aux;
    if (H->ultima == 0)
        return STDERROR;
    else  { 
          valor = H->V[1];
          i = 1;
          H->V[i] = H->V[H->ultima];
          H->ultima = H->ultima - 1;

          while ((2*i <= H->ultima && H->V[i] > H->V[2*i]) || (2*i < H->ultima && H->V[i] > H->V[2*i+1])){
                menor = 2*i;
                if (2*i < H->ultima && H->V[2*i+1] <= H->V[2*i])
                    menor++;
                //Swap-------------------
                aux = H->V[i];
                H->V[i] = H->V[menor];
                H->V[menor] = aux;
                //-----------------------
                i = menor;
          }
    }
    return valor;
} 

int maiorElemento(int *L, int tam){
    int i, k=0,mov;
    for(i=0; i<tam; i++){
        if(L[i] > k){
            k = L[i];
            mov++;
        }
    }
    return k;
}


void heapSort (int *L, int n) {
    int i=0;
    struct HBC *H = iniciaHeap(n);
    for (i = 0; i < n; i++)   
        insereHeap (H,L[i]);
    for (i = 0; i < n; i++)       
        L[i] = removeMenor (H);
    free(H);

    return;
}   

#endif
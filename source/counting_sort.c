#ifndef __COUNTINGSORT
#define __COUNTINGSORT

void countingSort (int *L, int tam)  {
    int i;
    int maior;
    int aux[tam];
    
    //Encontrando o maior número
    for(i=0;i<tam;i++){
        if(L[i]>maior) maior=L[i];
    }

    int C[maior+1];
    for (i=0;i<=maior;i++){
        C[i]=0;
    }
    for (i=0;i<tam;i++){
        C[L[i]]=C[L[i]]+1;
    }
    for (i=1;i<=maior;i++){
        C[i]=C[i]+C[i-1];
    }
    for (i=tam-1;i>=0;i--){
        C[L[i]]=C[L[i]]-1;
        aux[C[L[i]]]=L[i];
    }

    for (i=0;i<tam;i++){
        L[i]=aux[i];
    }
    return;
}

#endif
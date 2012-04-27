#ifndef __SHELLSORT
#define __SHELLSORT

void shellSort(int* L, int tam){
    int h;
    int pivo, i, j;
    h=1;
    do h = 3*h+1; while(h<tam);
    do{ 
        /* h assume apenas números positivos então este typecasting
           assumirá o mesmo valor do piso de h/3 */
        h = (int)h/3; 
        for(i=h;i<tam;i++){
            pivo = L[i];
            j = i-h;
            while(j>=0 && L[j]>pivo){
                L[j+h] = L[j];
                j = j-h;
            }
            L[j+h] = pivo;
        }
    }while(h>1);
    return;
}

#endif
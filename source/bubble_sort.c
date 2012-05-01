#ifndef __BUBBLESORT
#define __BUBBLESORT

void bubbleSort(int* L, int tam){
    int i, j;
    int bck;
    int flag;
    i=1;
    do{
        flag = 0;
        for(j=0;j<tam-i;j++){
            if(L[j]>L[j+1]){
                /*Swap-------------*/
                    bck = L[j];
                    L[j] = L[j+1];
                    L[j+1] = bck;
                /*-----------------*/
                flag = 1;
            }
        }
        i++;
    }while(flag);
    return;
}

#endif

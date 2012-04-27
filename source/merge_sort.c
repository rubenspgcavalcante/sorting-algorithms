void merge(int* L, int inicio, int meio, int fim){
    int i, j, cnt, k;
    int Aux[fim+1];
        
    i = inicio;
    j = meio+1;
    k = 0;  
    
    while(i<=meio && j<=fim){
        if(L[i]<=L[j]){
            Aux[k] = L[i];
            i++;
            }
        else{
            Aux[k] = L[j];
            j++;
        }
        k++;
    }
    if(i<=meio){
        for(j=meio;j>=i;j--){
            L[fim-meio+j] = L[j];
        }
    }
    for(cnt=0;cnt<k;cnt++){
        L[inicio+cnt] = Aux[cnt];
        }
}

void mergeSort(int* L, int inicio, int fim){
    int meio;
    if(inicio<fim){
    //inicio e fim sempre postivos, logo piso igual ao typecasting
        meio = (int)(inicio+fim)/2;
        mergeSort(L, inicio, meio);
        mergeSort(L, meio+1, fim);
        merge(L,inicio,meio,fim);
    }
}
#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arquivo[],int size){
    int troca = 1;
    while(troca){
        troca = 0;
        for(int i=0;i<size-1;i++){
            if(arquivo[i]>arquivo[i+1]){
                int temp = arquivo[i];
                arquivo[i] = arquivo[i+1];
                arquivo[i+1] = temp;
                troca = 1;
            }
        }
    }
}


void rQuickSort(int arquivo[],int inicio,int fim){
    if(inicio<=fim){
        int i= inicio-1;
        int j = inicio;
        int p = arquivo[fim];
        int temp;
        while(j<fim){
            if(arquivo[j]< p){
                
                i++;
                temp = arquivo[j];
                arquivo[j] = arquivo[i];
                arquivo[i] = temp;
            }
            j++;
        }
        temp = p;
        for(int x=fim;x>=i+1;x--){
            
            arquivo[x]=arquivo[x-1];
        }
        arquivo[i+1] = p;
        rQuickSort(arquivo,0,i);
        rQuickSort(arquivo,i+2,fim);
    }
}

void quicksort(int arquivo[],int size){
    rQuickSort(arquivo,0,size-1);
}

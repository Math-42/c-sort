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

void selectionSort(int arquivo[],int size){
    int max = arquivo[0];
    int pos =0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arquivo[j]>=max){
                max = arquivo[j];
                pos = j;
            }
        }
        int temp = arquivo[size-i-1];
        arquivo[size-i-1] = max;
        arquivo[pos] = temp;
        max = arquivo[0];
    }
}

void insertionSort(int arquivo[],int size){
    for(int i=1;i<size;i++){
        int aux = arquivo[i];
        for(int j=i;j>0;j--){
            if(aux < arquivo[j-1]){
                arquivo[j]=arquivo[j-1];
                arquivo[j-1] = aux;
            }else{
                break;
            }
        }
    }
}
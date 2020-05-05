#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

int bubblesort(int arquivo[],int size){
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
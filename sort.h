#ifndef _SORT_H_
#define _SORT_H_

#define size(arquivo)  (sizeof(arquivo) / sizeof((arquivo)[0]))

void bubblesort(int arquivo[],int size);
void quicksort(int arquivo[],int size);
void selectionSort(int arquivo[],int size);
void insertionSort(int arquivo[],int size);

#endif
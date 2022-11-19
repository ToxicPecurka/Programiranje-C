#include <stdio.h>
 
void swap(int niz[], int p, int d)
{
    int temp = niz[p];
    niz[p] = niz[d];
    niz[d] = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(arr, min_idx, i);
    }
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5; //duzina niza
    printf("Nesortiran niz: \n");
	printArray(arr, n);
    selectionSort(arr, n);
    printf("Sortiran niz: \n");
    printArray(arr, n);
    return 0;
}

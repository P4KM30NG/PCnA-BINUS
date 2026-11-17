#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}


int main()
{
    int arr[7];
    int k;
    printf("Masukkan 7 angka: ");
    for (int i = 0; i < 7; i++){
        
        scanf("%d", &arr[i]);
    }

    printf("Masukkan K: "); scanf("%d", &k);

    qsort(arr,7,sizeof(int), comp);

   for (int j = 0; j < 7; j++)
    {
        printf("%d, ", arr[j]);
    }

    printf("the %d-th smallest element is: %d", k, arr[k-1]);
    return 0;
}
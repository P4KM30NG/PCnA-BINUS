#include <stdio.h>


void input_Arr(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        printf("Masukkan angka ke-%d: ", i+1);
        scanf(" %d", &arr[i]);
        i++;
    }
}

int min_Arr(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int max_Arr(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void printMinMax(int arr[], int size, int min, int max){
    //Print array
    printf("This is The Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);

    }
    printf("Minimum Value: %d\n", min);
    printf("Maximum Value: %d\n", max);
}

int main() {
    const int size = 10;
    int numbers[size];
    input_Arr(numbers,size);
    int min = min_Arr(numbers,size);
    int max = max_Arr(numbers,size);
    printMinMax(numbers, size, min, max);
    return 0;
}
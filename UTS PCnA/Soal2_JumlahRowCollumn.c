#include <stdio.h>

int main() 
{
   int arr[5][5];
   int i = 0;
   int totalRow[5] = {0};
   int totalCol[5] = {0};

  
    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i+1);

        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
            totalRow[i] += arr[i][j];
            totalCol[j] += arr[i][j];
        }
    }

    printf("Row total: ");
    for (int k = 0; k < 5; k++)
    {
        printf("%d ", totalRow[k]);
    }
    printf("\nColumn total: ");
    for (int l = 0; l < 5; l++)
    {
        printf("%d ", totalCol[l]);
    }

    return 0;
}
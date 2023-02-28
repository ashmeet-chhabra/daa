#include <stdio.h>

void selectionSort(int arr[], int n);
void swap(int arr[], int i, int j);

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int n;

        scanf("%d", &n);

        int arr[n];

        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);

        selectionSort(arr, n);
    }

    return 0;
}

void selectionSort(int arr[], int n)
{
    int comp_count = 0, swap_count = 0;
    int min_index;

    for(int i = 0; i < n - 1; ++i)
    {
        min_index = i;
        for(int j = i + 1; j < n; ++j)
        {
            comp_count++;

            if(arr[j] < arr[min_index])
                min_index = j;
        }
        swap(arr, i, min_index);
        swap_count++;
    }

    for(int i = 0; i < n; ++i)
        printf("%d ", arr[i]);

    printf("comparisons = %d\n", comp_count);
    printf("swaps = %d\n", swap_count);
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

/*
3

8
-13 65 -21 76 46 89 45 12
-21 -13 12 45 46 65 76 89
comparisons = 28
swaps = 7

10
54 65 34 76 78 97 46 32 51 21
21 32 34 46 51 54 65 76 78 97
comparisons = 45
swaps = 9

15
63 42 223 645 652 31 324 22 553 12 54 65 86 46 325
12 22 31 42 46 54 63 65 86 223 324 325 553 645 652
comparisons = 105
swaps = 14
*/

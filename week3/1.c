#include <stdio.h>

void insertionSort(int arr[], int n);
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

        insertionSort(arr, n);
    }

    return 0;
}

void insertionSort(int arr[], int n)
{
    int comp_count = 0, shift_count = 0;

    for(int i = 1; i < n; i++)
    {
        comp_count++;
        for(int j = i; j > 0; j--)
        {
            if(arr[j - 1] <= arr[j])
                break;

            comp_count++;
            swap(arr, j, j - 1);
            shift_count++;
        }
    }

    for(int i = 0; i < n; ++i)
        printf("%d ", arr[i]);

    printf("\ncomparisons = %d\n", comp_count);
    printf("shifts = %d\n", shift_count);
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
-23 65 -31 76 46 89 45 32
-31 -23 32 45 46 65 76 89
comparisons = 20
shifts = 13

10
54 65 34 76 78 97 46 32 51 21
21 32 34 46 51 54 65 76 78 97
comparisons = 37
shifts = 28

15
63 42 223 645 652 31 324 22 553 -12 54 65 86 46 325
-12 22 31 42 46 54 63 65 86 223 324 325 553 645 652
comparisons = 68
shifts = 54
*/

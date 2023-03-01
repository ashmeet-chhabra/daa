#include <stdio.h>

void insertionSort(int arr[], int n);
void insert(int arr[], int n, int j, int i);

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
    int comp_count, shift_count = 0;

    for(int i = 1; i < n; i++)
        for(int j = 0; j < i; j++)
        {
            comp_count++;
            if(arr[j] > arr[i])
            {
                insert(arr, n, j, i);
                shift_count += i - j;
                break;
            }
        }

    for(int i = 0; i < n; ++i)
        printf("%d ", arr[i]);

    printf("\ncomparisons = %d\n", comp_count);
    printf("shifts = %d\n", shift_count);
}

void insert(int arr[], int n, int j, int i)
{
    int temp = arr[i];
    
    for(int k = i; k > j; k--)
        arr[k] = arr[k - 1];

    arr[j] = temp;
}

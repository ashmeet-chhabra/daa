#include <stdio.h>

int findIndices(int arr[], int n);

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int n, found;
        
        scanf("%d", &n);

        int arr[n];

        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);

        found = findIndices(arr, n);

        if(!found)
            printf("No sequence found.\n");
    }

    return 0;
}

int findIndices(int arr[], int n)
{
    int sum;

    for(int i = 0; i < n - 2; ++i)
        for(int j = i + 1; j < n - 1; ++j)
        {
            sum = arr[i] + arr[j];

            for(int k = j + 1; k < n; ++k)
                if(arr[k] == sum)
                {
                    printf("%d, %d, %d\n", i + 1, j + 1, k + 1);
                    return 1;
                }
        }     
    return 0;  
}

/*
3

5
1 5 84 209 341
No sequence found.

10
24 28 48 71 86 89 92 120 194 201
2, 7, 8

15
64 69 82 95 99 107 113 141 171 350 369 400 511 590 666
1, 6, 9
*/

#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int n, k, count = 0;
        
        scanf("%d", &n);

        int arr[n];

        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);

        scanf("%d", &k);

        for(int i = 0; i < n - 1; ++i)
        {
            for(int j = i + 1; j < n; ++j)
            {
                int diff = abs(arr[i] - arr[j]);
                if(diff == k)
                    count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}

/*
2

5
1 51 84 21 31
20
2

10
24 71 16 92 12 28 48 14 20 22
4
4
*/

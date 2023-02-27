#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int n, key, high, low, mid;
        int found = 0;

        scanf("%d", &n);

        int arr[n];

        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);

        scanf("%d", &key);

        high = n - 1, low = 0;

        while(high >= low)
        {
            mid = (high + low) / 2;
            if(key == arr[mid])
            {
                found = 1;
                break;
            }
            else if(key > arr[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }

        if(!found)
        {
            printf("Not Present\n");
            continue;
        }

        int i, j, count = 1;

        i = mid - 1, j = mid + 1;

        do
        {
            if(arr[i] == key)
                count++, i--;
            if(arr[j] == key)
                count++, j++;
            
        } while(arr[i] == key || arr[j] == key);

        printf("%d - %d\n", key, count);
    }

    return 0;
}

/*
2

10
235 235 278 278 763 764 790 853 981 981
981
981 - 2

15
1 2 2 3 3 5 5 5 25 75 75 75 97 97 97
75
75 - 3
*/

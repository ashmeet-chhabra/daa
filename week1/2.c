#include <stdio.h>

int main() {
    int n, key, high, low, mid;
    int found = 0; // flag
    int comp = 0; // comparisons

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order: ", n);

    for(int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    high = n - 1, low = 0;

    while(++comp && high >= low)
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

    if(found)
        printf("Present %d", comp);
    else
        printf("Not Present %d", comp);

    return 0;
}

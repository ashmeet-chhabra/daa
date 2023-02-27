#include <stdio.h>

int main()
{
	int t;
	
	scanf("%d", &t); 
	
	while(t--)
	{
	    int n, key, high, low, mid;
	    int found = 0; // flag
	    int comp = 0; // comparisons

	    scanf("%d", &n);

	    int arr[n];

	    for(int i = 0; i < n; ++i)
	        scanf("%d", &arr[i]);

	    scanf("%d", &key);

	    high = n - 1, low = 0;

	    while(high >= low)
	    {
	        ++comp;
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
	        printf("Present %d\n", comp);
	    else
	        printf("Not Present %d\n", comp);
	}
    return 0;
}

/*
3

5
12 23 36 39 41
41
Present 3

8
21 39 40 45 51 54 68 72
69
Not Present 4

10
101 246 438 561 796 896 899 4644 7999 8545 
7999
Present 3
*/

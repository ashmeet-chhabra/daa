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

8
34 35 65 31 25 89 64 30
89
Present 2

5
977 354 244 546 355
244
Present 1

6
23 64 13 67 43 56
63
Not Present 3
*/

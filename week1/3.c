#include <stdio.h>

int main()
{
	int t;
	
	scanf("%d", &t);
	
	while (t--)
	{
    	int n, key;
        int prev = 0, curr = 2; // indices
        int found = 0, flag = 0;
        int comp = 0;   // comparisons

    	scanf("%d", &n);

	    int arr[n];

    	for(int i = 0; i < n; ++i)
    	    scanf("%d", &arr[i]);

    	scanf("%d", &key);

        comp++;
        if(key < arr[0])
            flag = 1;

        // to increment comp on every comparison
        while(++comp && arr[curr] < key)
        {
            // to prevent infinite loop
            if(curr == n - 1)
            {
                flag = 1;
                break;
            }

            prev = curr;
            curr *= 2;

            // to prevent array out of bounds
            if(curr >= n)
                curr = n - 1;
        }

        if(!flag)
            for(int i = prev; i <= curr; ++i)
                if(arr[i] == key)
                {
                    found = 1;
                    break;
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
Present 4
*/

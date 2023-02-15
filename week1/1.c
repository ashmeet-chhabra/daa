#include <stdio.h>

int main()
{
	int t;
	
	scanf("%d", &t); 
	
	while(t--)
	{
    	int n, key;
		int found = 0; // flag
    	int comp = 0; // comparisons

    	scanf("%d", &n);

    	int arr[n];

    	for(int i = 0; i < n; ++i)
    	    scanf("%d", &arr[i]);

    	scanf("%d", &key);

    	for(int i = 0; i < n; ++i)
    	    if(++comp && arr[i] == key)
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

8
34 35 65 31 25 89 64 30
89
Present 6

5
977 354 244 546 355
244
Present 3

6
23 64 13 67 43 56
63
Not Present 6
*/

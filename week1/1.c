#include <stdio.h>

int main()
{
	int t;
	
	printf("Enter the number of test cases");
	scanf("%d", &t); 
	
	while(t--)
	{
    	int n, key;
	    int found = 0; // flag
    	int comp = 0; // comparisons

    	printf("Enter size of array: ");
    	scanf("%d", &n);

    	int arr[n];

    	printf("Enter %d elements: ", n);

    	for(int i = 0; i < n; ++i)
    	    scanf("%d", &arr[i]);

    	printf("Enter key: ");
    	scanf("%d", &key);

    	for(int i = 0; i < n; ++i)
    	    if(++comp && arr[i] == key)
    	    {
    	        found = 1;
    	        break;
    	    }

    	if(found)
    	    printf("Present %d", comp);
    	else
    	    printf("Not Present %d", comp);
    }
    return 0;
}

/*


*/

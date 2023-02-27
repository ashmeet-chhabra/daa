#include <stdio.h>

int main()
{
	int t;
	
	printf("Enter number of test cases: ");
	scanf("%d", &t);
	
	while (t--)
	{
    	int n, key, high = 2, low = 0;
	    int flag = 1, found = 0; // flags
	    int comp = 0; // comparisons

	    printf("Enter size of array: ");
    	scanf("%d", &n);

	    int arr[n];

    	printf("Enter %d elements in sorted order: ", n);

    	for(int i = 0; i < n; ++i)
    	    scanf("%d", &arr[i]);

    	printf("Enter key: ");
    	scanf("%d", &key);

		comp++;
		if(key < arr[0])
			found = 0;
		else
		{
			while(++comp && arr[high] < key)
			{
				if(high == n - 1 && key > arr[high])
				{
					flag = 0;
					break;
				}
				low = high;
				high *= 2;
				if(high > n - 1)
					high = n - 1;
			}
		
			if(flag)
				for(int i = low; i <= high; ++i)
					if(key == arr[i])
						found  = 1;			
		} 

    	if(found)
    	    printf("Present %d", comp);
    	else
    	    printf("Not Present %d", comp);
	}
	return 0;
}
 

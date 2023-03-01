#include <stdio.h>

void selectionSort(int arr[], int n);
void checkDuplicates(int arr[], int n);
void swap(int arr[], int i, int j);

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int n;

        scanf("%d", &n);

        int arr[n];

        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);

        selectionSort(arr, n);
        
        checkDuplicates(arr, n);
    }

    return 0;
}

void selectionSort(int arr[], int n)
{
	int min_index;
    for(int i = 0; i < n - 1; ++i)
    {
    	min_index = i;
    	for(int j = i + 1; j < n; ++j)
    	{
    		if(arr[j] < arr[min_index])
    			min_index = j;
    	}
    	swap(arr, i, min_index);
    }
}

// will receive a sorted array
void checkDuplicates(int arr[], int n)
{
	int flag = 0;
	
	for(int i = 0; i < n - 1; ++i)
		if(arr[i] == arr[i + 1])
		{
			flag = 1;
			break;
		}
		
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

/*
3

5
28 52 83 14 75
NO

10
75 65 1 65 2 6 86 2 75 8
YES

15
75 35 86 57 98 23 73 1 64 8 11 90 61 19 20
NO
*/

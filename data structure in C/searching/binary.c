/* C program to implement Binary Search */
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;


		if (arr[mid] == x)
			return mid;


		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);


		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x,i;
	printf("This is a program of binary search \n");
	for(i=0;i<n;i++)
    {
        printf("array item : %d = %d\n",i+1,arr[i]);
    }
	printf("what you wanted to search in array : ");
	scanf("%d",&x);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? printf("Element is not present in array")
				: printf("Element is present at index %d",
							result+1);
	return 0;
}


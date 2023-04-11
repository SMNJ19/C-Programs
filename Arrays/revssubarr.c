// C program to reverse every sub-array formed by
// consecutive k elements
#include <stdio.h>
// Function to reverse every sub-array formed by
// consecutive k elements
void reverse(int arr[], int n, int k)
{

	for(int i=0;i<n;i=i+k)
{
int left = i;
int right;
if(i+k-1<n-1)

right = i+k-1;
else
right = n-1;

while(left<right)
{
int temp;
temp = arr[left];
arr[left] = arr[right];
arr[right] = temp;
left++;
right--;
}
}
}
int main()
{
	int arr[] = {1, 2, 3, 5, 4, 8, 7, 6};
	int k = 4;

	int n = sizeof(arr) / sizeof(arr[0]);

	reverse(arr, n, k);

	for (int i = 0; i < n; i++)
		printf("%d ",arr[i]);

	return 0;
}


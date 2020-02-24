#include<stdio.h>

#define maz 10
int half_find(int a[maz],int b)
{
	int high = maz, low = 0;
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (a[mid] < b)
		{
			low = mid + 1;
		}
		else if (a[mid] == b)
			return mid;
		else high = mid - 1;
	}
	
	return -1;
}
int main()
{
	int a[maz] = { 1,2,3,5,6,9,10,15,25,30 };
	int b = 7;
	int c = half_find(a,b);
	if (c != -1)
	{
		printf("Î»ÖÃÎª%d", c);
	}
	else
		printf("Î´ÕÒµ½");
	getchar();
}
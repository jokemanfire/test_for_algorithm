#include<stdio.h>

#define max 10
int quicksort(int a[max],int low,int high)
{
	int b = a[low];
	while (low < high)
	{
		while (low<high &&a[high] >= b)
		{
			
			high--;
		}
		a[low] = a[high];
		while (low<high && a[low] <= b)
		{
			low++;
		}
		a[high] = a[low];
	}
	a[low] = b;
	return low;
}
void quikdo(int a[max], int low, int high)
{
	if (low < high)
	{
		int p = quicksort(a, low, high);
		quikdo(a, low, p - 1);
		quikdo(a, p + 1, high);
	}
}
int main()
{
	int a[max] = { 2,3,1,0,9,20,15,6,7,10 };
	quikdo(a,0,max-1);
	for (int i = 0; i < max; i++)
		printf("%d\n",a[i]);
	getchar();
}
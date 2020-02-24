#include<stdio.h>

#define maz 10

void shellsort(int a[maz])
{
	int f = 0;
	int k = 0;
	for (int i = 5; i >= 1; i = i / 2)
	{
		for (int j = i+1; j < maz; j = j + i)
		{
			if (a[j] < a[j - i])
			{
				f = a[j];
				for (k = j - i; f > 0 && f < a[k]; k = k - i)
				{
					a[k + i] = a[k];
				}
				a[k + i] = f;
			}
		}
	}
	for (int i = 0; i < maz; i++)
	{
		printf("%d\n", a[i]);
	}
	getchar();
}
int main()
{
	int a[maz] = { 2,3,1,5,6,15,10,11,25,30 };
	shellsort(a);

}
#include<stdio.h>

#define maz 10

void insertsort(int a[maz])
{
	int b[maz + 1];
	b[0] = 0;
	int low = 0, high = maz + 1,mid = 0;
	int j = 0;
	for (int i = 0; i < maz; i++)
		b[i + 1] = a[i];
	for (int i = 2; i < maz + 1; i++)
	{
		if (b[i] < b[i - 1])
		{
			b[0] = b[i];
			low = 1; high = i - 1;
			while (low <= high)
			{
				mid = (low + high) / 2;
				if (b[mid] < b[0])
					low = mid + 1;
				else
					high = mid - 1;
			}
			for (j = i - 1; j >= high; j--)
				b[j + 1] = b[j];
			b[high + 1] = b[0];
		}
	}
	for (int i = 1; i < maz + 1; i++)
	{
		printf("%d\n", b[i]);
	}
	getchar();
}
int main()
{
	int a[maz] = { 2,3,1,5,6,15,10,11,25,30 };
	insertsort(a);
	
}
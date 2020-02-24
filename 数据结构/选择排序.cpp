#include<stdio.h>

#define max 10
void selectsort(int a[max])
{
	int min = 0;
	int temp;
	for (int i = 0; i < max; i++)
	{
		min = i;
		for (int j = i + 1; j < max; j++)
			if (a[min] > a[j]) min = j;
		if(min!= i)
		{
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
			
	}
	
}
int main()
{
	int a[max] = { 1,2,3,0,9,6,5,4,16,20 };
	selectsort(a);
	for (int i = 0; i < max; i++)
	{
		printf("%d\n", a[i]);
	}
	getchar();
}
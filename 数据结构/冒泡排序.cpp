#include<stdio.h>

#define max 10
void bubblesort(int a[max])
{
	bool flag = true;
	int ex;
	for (int j=max;j>0;j--)
	{
		flag = false;
		for (int i = 0; i < j; i++)
		{
			if (a[i - 1] > a[i])
			{
				ex = a[i];
				a[i] = a[i - 1];
				a[i - 1] = ex;
				flag = true;
			}
		}
		if (flag == false)
		{
			break;
		}
	}
	for (int i = 0; i < max; i++)
	{
		printf("%d\n", a[i]);
	}
	getchar();
}
int main()
{
	int a[max] = { 2,3,1,0,9,20,15,6,7,10 };
	bubblesort(a);
}
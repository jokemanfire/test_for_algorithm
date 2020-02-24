#include<stdio.h>


void insertSort(int a[7])
{
	int b[8];
	int j = 0;
	b[0] = 0;
	for (int i = 0; i < 7; i++)
		b[i + 1] = a[i];
	for (int i = 2; i <= 7; i++)
	{
		if (b[i] < b[i - 1])
		{
			b[0] = b[i];
			for (j = i - 1; b[0] < b[j]; j--)
			{
				b[j + 1] = b[j];
			}
			b[j + 1] = b[0];
		}
	}
	for (int i = 1; i <= 7; i++)
	{
		printf("%d\n", b[i]);
	}
	getchar();
}
int main()
{
	int a[7] = { 1, 1, 4, 2, 10, 5, 20 };
	insertSort(a);

}
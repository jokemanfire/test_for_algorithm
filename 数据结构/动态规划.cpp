#include <iostream>

//LCSÎÊÌâ
using namespace std;
int main()
{
	uint32_t n = 4294967293;
	uint32_t n2 = 0;
	int count = 31;
	while (count != 0)
	{
		n2 += (n & 1);
		n >>= 1;
		count--;
		n2 <<= 1;
	}
	if (n == 1)
		n2 += (n & 1);
	cout << n2 << endl;
	getchar();
}
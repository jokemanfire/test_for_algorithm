#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

int main()
{
	vector <int> digits{ 1,9 };
	bool zen = true;
	for (int i = digits.size()-1; i >= 0; i--)
	{
		if (zen == true)
		{
			if (digits[i] + 1 == 10)
			{
				digits[i] = 0;
				zen = true;
			}
			else
			{
				digits[i]++;
				zen = false;
			}
		}
	
	}
	if (zen == true)
		digits.insert(digits.begin(), 1);
	for (int i = 0; i < digits.size(); i++)
	{
		cout << digits[i] << endl;
	}
	getchar();
	
}

#include<iostream>
#include<vector>
using namespace std;

vector<int> fen_method(vector<int>num, int low, int high);
int brute_method(vector<int> num);
int main()
{
	vector<int>num = { 1,2,-3,3,6,7,-1 };
	int max = brute_method(num);
	cout << max << endl;
	vector<int>result;
	result = fen_method(num, 0, num.size() - 1);
	cout << result[2];

}

vector<int> find_cross(vector<int>num, int low, int mid, int high)
{
	int left_sum = -999;
	int sum = 0;
	int max_left = 0;
	for (int i = mid; i >= low; i--)
	{
		sum += num[i];
		if (sum >= left_sum)
			{
			left_sum = sum;
			max_left = i;
			}
	}
	int right_sum = -999;
	sum = 0;
	int max_right = high;
	for (int i = mid + 1; i <= high; i++)
	{
		sum += num[i];
		if (sum >= right_sum)
		{
			right_sum = sum;
			max_right = i;
		}
	}
	vector<int> factor;
	factor.push_back(max_left);
	factor.push_back(max_right);
	factor.push_back(left_sum + right_sum);
	return factor;
}
vector<int> fen_method(vector<int>num ,int low,int high)//分治法算法
{
	vector<int> factor;
	if (high == low)
	{
		factor.push_back(low);
		factor.push_back(high);
		factor.push_back(num[low]);
		return factor;
	}
	else
	{
		int mid = (low + high) / 2;
		vector<int> left_factor;
		left_factor =  fen_method(num, low, mid);
		vector<int> right_factor;
		right_factor = fen_method(num, mid+1, high);
		vector<int>  cross_factor;
		cross_factor = find_cross(num, low, mid, high);
		vector<int> result;
		if (left_factor[2] >= right_factor[2] && left_factor[2] >= cross_factor[2])
		{
			return left_factor;
		}
		else if (right_factor[2] >= left_factor[2] && right_factor[2] >= cross_factor[2])
		{
			return right_factor;
		}
		else
			return cross_factor;
	}
}
int brute_method(vector<int> num)//暴力算法
{
	int max = 0;
	for (int i = 0; i < num.size(); i++)
	{
		int max2 = 0;
		for (int j = i; j < num.size(); j++)
		{
			max2 += num[j];
			if (max < max2)
				max = max2;
		}
	}
	return max;

}
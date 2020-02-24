#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> compute_function(string T);


int main()
{ 
	string T = "acacababacab";
	string P = "ababaca";
	vector<int> next = compute_function(T);
	int q = -1;
	for (int i = 0; i < T.size(); i++)
	{
		while (q > -1 && P[q + 1] != T[i])
		{
			q = next[q];
		}
		if (P[q + 1] == T[i])
			q = q + 1;
		if (q == P.size()-1)
			cout<< i - P.size()+1<<endl;

	}
	getchar();
	return 1;
}

vector<int> compute_function(string T)
{
	vector<int>next(T.size());
	next[0] = -1;
	int k = -1;
	for (int q = 1; q < T.size(); q++)
	{
		while (k > -1 && T[k + 1] != T[q])
		{
			k = next[k];
		}
		if (T[k + 1] == T[q])
			k = k + 1;
		next[q] = k;
	}
	return next;

}
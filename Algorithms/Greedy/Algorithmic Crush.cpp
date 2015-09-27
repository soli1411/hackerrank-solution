//Algorithmic Crush hackerrank solution
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<pair<int, pair<int, int>>> v;

int main()
{
	int n, m;
	cin>>n>>m;
	for (int i = 0; i < m; i++)
	{
		int a, b, k;
		cin>>a>>b>>k;
		v.push_back(make_pair(a, make_pair(-1, k)));
		v.push_back(make_pair(b, make_pair(1, k)));
	}
	sort(v.begin(), v.end());
	int sz = (int)v.size();
	long long ret = 0, tmp = 0;
	for (int i = 0; i<sz; i++)
	{
		if (v[i].second.first == -1)
			tmp += v[i].second.second;
		else
			tmp -= v[i].second.second;

		if (tmp > ret)
			ret = tmp;
	}
	cout<<ret;
	return 0;
}

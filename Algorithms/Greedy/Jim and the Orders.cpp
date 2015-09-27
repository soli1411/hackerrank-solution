//Jim and the Orders hackerrank solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N; 
    cin>>N;
    vector<pair<int,int>> orders;
    int arrival, time;
    for(int i=0;i<N;i++)
        {cin>>arrival>>time;
         orders.push_back(make_pair(arrival+time,i));}
    sort(orders.begin(),orders.end());
    for(int i=0;i<N;i++)
        cout<<orders[i].second+1<<" ";
    return 0;
}

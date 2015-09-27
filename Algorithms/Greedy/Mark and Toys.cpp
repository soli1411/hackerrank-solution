//Mark and Toys hackerrank solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() 
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    
    int answer = 0;
    
    // Write the code for computing the final answer using n,k,prices
    int sum=0;
    sort(prices.begin(),prices.end());
    for (int i=0;i<n;i++)
     {if (sum+prices[i]<=k)
            {sum+=prices[i];
             answer++;}
        else 
            break;}
    cout << answer << endl;
    
    return 0;
}

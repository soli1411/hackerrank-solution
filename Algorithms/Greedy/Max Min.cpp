//Max Min hackerrank solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() 
{
    int N, K, unfairness = INT_MAX;
    cin >> N >> K;
    vector <int> a(N);
    for (int i=0; i<N; i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    for (int i=0;i+K<N;i++)
        if (a[i+K-1]-a[i]<unfairness)
            unfairness=a[i+K-1]-a[i];
    
    cout << unfairness << "\n";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct _ { ios_base::Init i; _() { cin.sync_with_stdio(0); cin.tie(0); } } _;

const int N = 100000;
long long a[N];

long long gcd(long long a, long long b)
{
    if(a < 0) a = -a; if(b < 0) b = -b;
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int n, q; cin >> n >> q;
    long long temp;
    for(int i = 0; i < n; ++i) {
      cin >> temp;
      a[i] = temp;
    }

    long long d = 0;
    for(int i = 0; i < n; ++i)
        d = gcd(d, a[i] - a[1]);

    while(q--)
    {
        int k; cin >> k;
        cout << gcd(d, a[0] + k) << '\n';
    }
    return 0;
}

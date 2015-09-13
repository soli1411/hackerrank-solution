#include <iostream>

using namespace std;

typedef long long ll;

ll mod=1000000007ll;

ll pow(ll a, ll p, ll m){
    if (p==2ll) return (a*a)%m;
    if (p==0ll) return 1ll;
    if (p%2ll==0ll) return pow(pow(a, p/2ll, m), 2ll, m);
    return (a*pow(a, p-1ll, m))%m;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<(pow(2ll, pow(2ll, n, mod-1ll), mod)*pow(pow(2, n, mod), mod-2ll, mod))%mod<<endl;
    }
}

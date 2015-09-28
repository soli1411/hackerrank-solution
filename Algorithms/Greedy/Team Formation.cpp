// Team Formation hackerrank solution
using namespace std;
#include <bits/stdc++.h>

int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        map<int, priority_queue<int, vector<int>, greater<int> > > val;
        int n;
        cin>>n;
        vector<int> vec(n);
        for(auto i=0; i<(n); i++)
            cin >> vec[i];
        sort( vec.begin(), vec.end() );
        
        for(auto i=0; i<(n); i++) {
            int tmp = vec[i];
            int now = 0;
            auto it = val.find(tmp - 1);
            if (it != val.end() && it->second.size()) {
                now = it->second.top(); 
                it->second.pop();
            } 
            now++;
            val[tmp].push(now);
        }
        int ans = INT_MAX;
        for ( auto x : val ) if ( x.second.size() )
            ans = min( ans, x.second.top() );
        if (ans == INT_MAX) ans = 0;
        cout << ans << endl;
    }
    
    return 0;
}

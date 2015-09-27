//Sherlock and MiniMax hackerrank solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() 
{int n,p,q;cin>>n;
 vector <int> a(n);
 for (int i=0;i<n;i++)
     cin>>a[i];
 cin>>p>>q;
 sort(a.begin(),a.end());
 vector <int> b;
 for (int i=0;i<n-1;i++) 
    {b.push_back((a[i]+a[i+1])/2);
     if ((a[i]+a[i+1])%2==1)  
        b.push_back((a[i]+a[i+1])/2+1);
    }
 b.push_back(p);
 b.push_back(q);
 sort(b.begin(),b.end());
 int da=-1;
 int ans=0;
 int len=b.size();
 for (int i=0;i<len;i++) 
    if (b[i]>=p && b[i]<=q) 
        {int mini=INT_MAX;
         for (int j=0;j<n;j++)
              mini=min(mini,abs(b[i]-a[j]));
              if (mini>da) {
                 da=mini;
                 ans=b[i];
                }
            }
 cout<<ans<<endl;          
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

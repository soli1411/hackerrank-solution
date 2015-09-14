#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{int t;cin>>t;
 while (t--)
     {int n;cin>>n;
      vector <int> v(n);
      bool f=false;
      cin>>v[0];
      for (int i=1;i<n;i++)
        {cin>>v[i];
         v[i]=__gcd(v[i-1],v[i]);
         if (v[i]==1) 
            f=true;
         }
      if (f) {cout<<"YES"<<endl;continue;}
      
      cout<<"NO"<<endl;
     }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

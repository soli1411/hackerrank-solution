#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{int t;
 cin>>t;
 while (t--)
     {int n,k;
      cin>>n>>k;
      vector <int> a(n);
      vector <int> b(n);
      bool f=1;
      for (int i=0;i<n;i++)
          cin>>a[i];
      sort(a.begin(),a.end());
      for (int i=0;i<n;i++)
          cin>>b[i];
      sort(b.begin(),b.end(),greater<int>());//sorts b in descending  order
      for (int i=0;i<n;i++)
          if (a[i]+b[i]<k)
              {f=0;break;}
      if (f)
          cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

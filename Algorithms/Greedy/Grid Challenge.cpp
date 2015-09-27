//Grid Challenge hackerrank solution
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
     {int n;cin>>n;
      vector <string> G;
      string str;
      bool f=true;
      for (int i=0;i<n;i++)
        {cin>>str;
         sort(str.begin(), str.end());
         G.push_back(str);
        }
      for (int j=0;j<n;j++)
          for (int i=0;i<n-1;i++)
            if (G[i][j]>G[i+1][j])
                {f=0;}
      if (f)
          cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
     }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

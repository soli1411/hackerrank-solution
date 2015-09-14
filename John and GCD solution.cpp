#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
	return b?gcd(b,a%b):a;
}

int lcm(int a, int b)
{
	return a*b/gcd(a,b);
}

int main() 
{int t;cin>>t;
 while (t--)
     {int n;cin>>n;
      int A[n],B[n+1];
      for (int i=0;i<n;i++)
          cin>>A[i];
      cout<<A[0]<<" ";
      for (int i=1;i<n;i++)
          cout<<lcm(A[i-1],A[i])<<" ";
      cout<<A[n-1]<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

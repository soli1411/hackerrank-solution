// The Maximum Subarray hackerrank solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int MaximumSubArraySum(vector<int> &input)
{       int sum = 0;
        int MaxSum = 0;
        for (int i = 0; i < input.size(); i++)
        {sum+=input[i];
            if (sum > 0)
            {
                if (sum > MaxSum)
                {
                    MaxSum = sum;
                }
            }
            else
            {
                sum = 0; 
            }
        }
  return MaxSum;
}

int main() 
{int t;
 cin>>t;
 while(t--)
     {int n;
      cin>>n;
      vector <int> a(n);
      for (int i=0;i<n;i++)
          cin>>a[i];
      int sum=MaximumSubArraySum(a);
      bool f=0;
      if (sum>0)
          cout<<sum<<" ";
      else
          f=1;
      sum=0;
      sort(a.begin(),a.end());
      for (int i=n-1;i>=0 && a[i]>0;i--)
            sum+=a[i];
      if (f)
          cout<<a[n-1]<<" "<<a[n-1]<<endl;
      else
          cout<<sum<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

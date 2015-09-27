//Flowers hackerrank solution
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{int n,k;
 cin>>n>>k;
 vector <int> a(n);
 for (int i=0;i<n;i++)
    cin>>a[i];
 sort(a.begin(),a.end(),greater<int>());//sorts vector in descending order
 long long int money=0;
 int c=1;
 for (int i=0;i<n;i+=k)
    {for (int j=i;j<i+k && j<n;j++)
        {money+=c*a[j];
         //cout<<money<<endl;
        }
    c++;}
 cout<<money<<endl;
   return 0;
}

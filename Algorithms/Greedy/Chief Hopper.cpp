// Chief Hopper hackerrank solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{   int n;
	cin>>n;
	int max=0;
    vector <int> h(n+1);
    h[0]=0;
	for (int i=1; i<=n;i++)
	   {
		cin>>h[i];
		if (h[i]>max)
			max=h[i];
	   }
	int low=0, hi=max,mid;
	while (hi>low)
	   {
		mid=(low+hi)>>1;
		double energy=mid;
		for (int i=1;i<=n;i++)
		  {if (h[i]>energy)
				energy-=(h[i]-energy);
			else
				energy+=(energy-h[i]);
           if (energy<0)
				break;
		  }
        if (energy<0)
			low=mid+1;
		else
			hi=mid;
	   }
	cout<<low<<endl;
	return 0;
}

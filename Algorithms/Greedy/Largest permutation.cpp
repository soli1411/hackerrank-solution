//Largest permutation hackerrank solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{int n,k;
 cin>>n>>k;
 vector <int> a(n),pos(n+1);
 for(int  i=0;i<n;i++)
        {cin>>a[i];
		 pos[a[i]]=i;
	    }
 for(int  i=0;i<n && k>0;i++)
        {int maxInd=i,maxElem=a[i];
		for(int j=i+1;j<n;j++)
            {if(a[j]>maxElem)
                {maxElem=a[j];
			     maxInd=j;}
		    }
		if(i!=maxInd)
            {--k;
			 swap(a[i],a[maxInd]);
		    }
	   }
 
	for(int  i=0;i<n;i++)
    	cout<<a[i]<<" ";
	return 0;
}

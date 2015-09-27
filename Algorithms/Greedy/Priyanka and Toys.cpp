#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{int n;
 cin>>n;
 vector <int> w(n);
 for (int i=0;i<n;i++)
     cin>>w[i];
 sort(w.begin(),w.end());
 int ans=1,prev=w[0];
 for (int i=1;i<n;i++)
		if (w[i]-prev>4)
			prev=w[i],ans++;
	cout<<ans<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

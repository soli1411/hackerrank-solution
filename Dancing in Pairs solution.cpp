#include<iostream>
#include<cmath>
using namespace std;

int main()
{int t;
 cin>>t;
 while (t--)
    {long long num;
	 cin>>num;
	 long long val=(long long)sqrt(num);
	 long long res=0;
	 for (long long i=val-5;i<=val+5;i++)
	 	if (i*i <= num)
			res=i;
	if (res % 2 == 1) cout << "odd" << endl;
	else cout << "even" << endl;
	}
	return 0;
}

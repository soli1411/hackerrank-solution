#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{int t;cin>>t;
 while (t--)
     {long long int N,K;cin>>N>>K;
      long long int total = 0;
        long long int a = N / K + 1;
       long long int b = (2 * N) / K - ((2 * N) % K == 0 );
        
        if (K % 2 == 0)
            total += K * b * (b + 1) / 4 - b;
        else
            if (b % 2 == 0)
                {total += K * b * (b + 2) / 8 - b / 2;
                 total += K * b * (b + 2) / 8 - b * (K + 1) / 4;}
            else
                {total += K * (b - 1) * (b + 1) / 8 - (b - 1) / 2;
                total += K * (b + 1) * (b + 3) / 8 - (b + 1) * (K + 1) / 4;}
        
        total -= (b - a + 1) * ((a + b) * K - 2 * (N + 1)) / 2;
      cout<<total<<endl;
     }  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

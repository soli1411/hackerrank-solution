#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {int n,i;
            cin>>n;
            int a[n];
            for (i=0;i<n;i++)
                cin>>a[i];
            n=0;
            while (i--)
                n+=a[i];
            cout<<n;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

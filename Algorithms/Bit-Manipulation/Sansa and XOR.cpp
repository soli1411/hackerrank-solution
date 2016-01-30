// Sansa and XOR hackerrank solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//Even N => 0 Odd N => XOR of elements at position 0,2,4

int main() {
   int t;
   scanf("%d",&t);
   while(t--){
       int n;
       scanf("%d",&n);
       int a[n];
       for (int i=0;i<n;i++)
           scanf("%d",&a[i]);
       if (n & 1){
           int xorsum=0;
           for(int i=0;i<n;i+=2)
                xorsum^=a[i];
           printf("%d\n",xorsum);
       } else
           printf("0\n");
   }
   return 0;
}

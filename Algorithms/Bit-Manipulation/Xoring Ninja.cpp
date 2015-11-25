//Xoring Ninja hackerrank solution
//the XOR sum of all subsets is equal to the or of all numbers given;

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
T modpow(T base, T exp, T modulus) {
  base %= modulus;
  T result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}

int main() {
    int t;
    cin>>t;
    while(t--)
        {
        long long int n;
        cin>>n;
        long long int sum=0;
        long long int tmp;
        for (int i=0;i<n;i++)
            {
            cin>>tmp;
            sum|=tmp;
            sum%=1000000007;
            }
        cout<<(modpow((long long)2,n-1,(long long)1000000007)*sum)%1000000007<<endl;
        }   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

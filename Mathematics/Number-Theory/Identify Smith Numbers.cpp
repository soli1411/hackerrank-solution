//Hackerrank Identify Smith Numbers solution

#include <string.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> primes;

void Sieve(int upperBound) {
      int upperBoundSquareRoot = (int)sqrt((double)upperBound);
      bool *isComposite = new bool[upperBound + 1];
      memset(isComposite, 0, sizeof(bool) * (upperBound + 1));
      for (int m = 2; m <= upperBoundSquareRoot; m++) {
            if (!isComposite[m]) {
                  primes.push_back(m);
                  for (int k = m * m; k <= upperBound; k += m)
                        isComposite[k] = true;
            }
      }
      for (int m = upperBoundSquareRoot; m <= upperBound; m++)
            if (!isComposite[m])
                  primes.push_back(m);
      delete [] isComposite;
}

int digit_sum(int n){
    while (n>10){
        int sum=0,num=n;
        while (num>0){
            sum+=num%10;
            num/=10;
        }
        n=sum;
    }
    return n;
}

int factors_sum(int n)
{
    int sum=0;
    int size=primes.size();
    for (int i=0;i<size;i++){
        while (n%primes[i]==0 && n>1){
            //cout<<primes[i]<<endl;
            sum+=digit_sum(primes[i]);
            n/=primes[i];
        }
    }
    return sum;
}

bool is_smith(int n){
    int n_sum=digit_sum(n);
    int p_sum=digit_sum(factors_sum(n));
    return n_sum==p_sum;
}

int main() {
    int n;
    cin>>n;
    Sieve(10000000);
    cout<<is_smith(n);
    return 0;
}

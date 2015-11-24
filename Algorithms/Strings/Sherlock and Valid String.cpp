//Sherlock and Valid String solution hackerrank
//works in 0s for every test case. the vector was used in order to make the code reusable for n different mismatches...

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    int a[26]={0};
    vector <int> b;
    int mismatch=0;
    for (int i=0;i<s.length();i++)
        a[s[i]-'a']++;
    for (int i=0;i<26;i++)
        {
        if (a[i]==0)
            continue;
        if (mismatch==0)
            {b.push_back(a[i]);mismatch++;continue;}
        if (mismatch==1 && b[0]!=a[i])
            {mismatch++;continue;}
        if (mismatch()>1)
            {cout<<"NO";return;}
        }
    cout<<"YES";
    return 0;
}

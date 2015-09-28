// Lonely Integer hackerrank solution
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int b,a=0;
    while (n--) {
    cin >>b;
    a^=b;
    }
    cout<<a;
    
    return 0;
}

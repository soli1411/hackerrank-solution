// Maximizing XOR hackerrank solution
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
#include <climits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int maxXor(int l, int r) 
{int max=0;
for (int i=l;i<r;i++)
    for (int j=l+1;j<r;j++)
        if ((i^j)>max)
            max=i^j;
return max;
}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r+1);
    cout << res;
    
    return 0;
}

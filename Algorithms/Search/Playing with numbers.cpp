// Playing with numbers hackerrank solution 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	vector<long long> A(N);
	for (int i=0;i<N;i++)
        scanf("%lld", &A[i]);
	sort(A.begin(),A.end());
	vector<long long> sum(N+1, 0);
	for (int i=0;i<N;i++)
		sum[i+1] = sum[i] + A[i];
	int Q;
	scanf("%d", &Q);
	long long added = 0;
	for (int i=0;i<Q;i++) {
		int x;
		scanf("%d", &x);
		added += x;
		//A[i] + added >= 0
		//A[i] >= -added
		int k = lower_bound(A.begin(),A.end(), -added) - A.begin();
		long long ans = 0;
		ans += (sum[N] - sum[k]) + added * (N - k);
		ans += -((sum[k] - sum[0]) + added * k);
		printf("%lld\n", ans);
	}
	return 0;
}

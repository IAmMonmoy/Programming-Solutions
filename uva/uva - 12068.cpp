#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
	return b ? gcd(b,a%b):a;
}
int main() {
	int T, C = 0, i, N;
	scanf("%d", &T);
	while(T--) {
		scanf("%d", &N);
		long long A[10], m = 0, n = 0, tmp = 1;
		for(i = 0; i < N; i++)
			scanf("%lld", &A[i]), tmp *= A[i];
	
		m = tmp*N;
		for(i = 0; i < N; i++)
			n += tmp/A[i];

		tmp = gcd(m, n), m /= tmp, n /= tmp;
		printf("Case %d: %lld/%lld\n", ++C, m, n);
	}
return 0;
}

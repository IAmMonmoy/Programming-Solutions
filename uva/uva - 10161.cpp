#include<bits/stdc++.h>
using namespace std;
#define sqr(ZZ) (ZZ)*(ZZ)

int main() {
	long long x, y, t, d;
	while (scanf("%lld", &t) && t) {
		x = y = ceil(sqrt(t));
		d =  (x%2 ? 1 : -1)*(t - (int)(sqr(x-1) + x));

		x -= d > 0 ? d : 0;
		y += d < 0 ? d : 0;

		printf("%lld %lld\n",x,y);
	}
}

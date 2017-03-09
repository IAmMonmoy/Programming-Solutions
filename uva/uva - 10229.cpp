#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll mod;
void multiply(ll f[2][2], ll m[2][2])
{
  ll x =  f[0][0]*m[0][0] + f[0][1]*m[1][0];
  ll y =  f[0][0]*m[0][1] + f[0][1]*m[1][1];
  ll z =  f[1][0]*m[0][0] + f[1][1]*m[1][0];
  ll w =  f[1][0]*m[0][1] + f[1][1]*m[1][1];
 
  f[0][0] = x%mod;
  f[0][1] = y%mod;
  f[1][0] = z%mod;
  f[1][1] = w%mod;
}
void power(ll f[2][2],ll n)
{
	if(n == 0 || n == 1)
		return;
	ll m[2][2] = {{1,1},{1,0}};
	power(f,n/2);
	multiply(f,f);
	if(n%2!=0)
		multiply(f,m);
}

ll fib(ll n)
{
	ll f[2][2]={{1,1},{1,0}};
	if(n==0)
		return 0;
	power(f,n-1);
	
	return f[0][0];
}
int main()
{
	ll m , n;
	while(scanf("%lld %lld", &n, &m) == 2)
	{
		mod = 1LL << m;
		ll result = fib(n);
		result = result % mod;
		printf("%lld\n",result);
	}
	return 0;
}

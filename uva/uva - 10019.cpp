#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &a);
		int n = a,b1=0,b2=0;
		while(n) b1+=n&1,n=n>>1;
		while(a)
		{
			n=a%10,a/=10;
			while(n) b2+=n&1,n=n>>1;
		}
		printf("%d %d\n",b1,b2);
	}
	return 0;
}

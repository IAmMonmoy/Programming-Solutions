#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &a, &b);
		result = (a*(a+1))/2;
		result += (b-a-1)*a;
		printf("%d\n",result);
	}
	return 0;
}

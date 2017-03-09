#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c[21];
	scanf("%d", &a);
	while(a--)
	{
		scanf("%d", &b);
		for(int i = 0; i < b; i++)
			scanf("%d", &c[i]);
		sort(c,c+b);
		printf("%d\n",(c[b-1]-c[0])*2);
	}
	return 0;
}

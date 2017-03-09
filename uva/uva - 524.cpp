#include <bits/stdc++.h>
using namespace std;
int avil[17];
int ara[17];
int result[17][17];
int x,cnt,n;
int bit[42] = { 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1,
        0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1 };
void track()
{

	if(x < 0 || x > n-1)
		return;

	if(x == n-1)
	{
		if(bit[ara[x]+ara[0]])
		{
			for(int i = 0; i < x; i++)
			{
				printf("%d ",ara[i]);
			}
			printf("%d\n",ara[x]);
		}
		avil[ara[x]]=1;
		x--;
		return;
	}
	
	if(ara[x] % 2 == 0)
	{
		for(int i = 3; i <= n; i+=2)
		{
			if(avil[i] && bit[ara[x]+i])
			{
				x++;
				avil[i]=0;
				ara[x]=i;
				track();
			}
		}
	}
	
	else
	{
		for(int i = 2; i <= n; i+=2)
		{
			if(avil[i] && bit[ara[x]+i])
			{
				x++;
				ara[x]=i;
				avil[i]=0;
				track();
			}
		}
	}
	
	avil[ara[x]]=1;
	x--;
	return;
}
int main()
{
	int cases=0;
	while(scanf("%d", &n) == 1)
	{
		if(cases)
			printf("\n");
		printf("Case %d:\n",++cases);
		for(int i = 1; i <= n; i++)
			avil[i]=1;
		x = 0,cnt=0;
		ara[x]=1;
		track();
	}
	return 0;
}

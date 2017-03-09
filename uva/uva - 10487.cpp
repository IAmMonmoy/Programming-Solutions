#include <bits/stdc++.h>
using namespace std;
vector<int>mnmy;
int binary(int l, int h,int q)
{
	if(h-l == 1)
	{
		int diff1 = abs (mnmy[l] - q);
        int diff2 = abs (mnmy[h] - q);
        if ( diff1 < diff2 ) return mnmy[l];
        return mnmy[h];
	}
	int mid = (h+l)/2;
	if(mnmy[mid] == q)
		return mnmy[mid];
	if(q > mnmy[mid])
		return binary(mid,h,q);
	else
		return binary(l,mid,q);
}
int main()
{
	int a,b,ara[1010],c,cases=0;
	while(scanf("%d", &a) == 1 && a)
	{	
		for(int i = 0; i < a; i++)
			scanf("%d", &ara[i]);
			
		for(int i = 0; i < a; i++)
			for(int j = i+1; j < a; j++)
				mnmy.push_back(ara[i]+ara[j]);
				
		sort(mnmy.begin(),mnmy.end());	
		scanf("%d", &b);
		printf("Case %d:\n", ++cases);
		while(b--)
		{
			scanf("%d", &c);
			printf("Closest sum to %d is %d.\n",c,binary(0,mnmy.size()-1,c));
		}
		mnmy.clear();
	}
	return 0;
}

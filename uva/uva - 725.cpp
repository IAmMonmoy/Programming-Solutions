#include <bits/stdc++.h>
using namespace std;
bool check(int m, int n)
{
	int count1=0,count2=0;
	map<int,int>p;
	while(m)
	{
		p[m%10]=1;
		m/=10;
		count1++;
	}
	if(count1 < 5)
		p[0]++;
	while(n)
	{
		if(p[n%10])
			return false;
		n/=10;
		count2++;
	}
	if(count2 < 5)
		p[0]++;
	if(p[0] == 2)
		return false;
	return true;
}
int main()
{
	map<int,int>mnmy;
	vector<int>all;
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(j != i)
			for(int k = 0; k < 10; k++)
			{
				if(k != i && k != j)
				for(int l = 0; l < 10; l++)
				{
					if(l != i && l != j && l != k)
					for(int m = 0; m < 10; m++)
					{
						if(m != i && m != j && m != k && m != l)
						{
							int x = (((((((i*10)+j)*10)+k)*10)+l)*10)+m;
							all.push_back(x);
							mnmy[x]=1;
						}
					}
				}
			}
		}
	}

	int a;
	bool p = false;
	while(scanf("%d", &a)==1 && a)
	{
		if(p)
			printf("\n");
		p = true;
		int m = 1,flag=0;
		for(int i = 0; i < all.size() && m <= 98765; i++)
		{
			m = all[i]*a;
			if(mnmy[m] && check(m,all[i]))
			{
				if(all[i] < 10000)
					printf("%d / 0%d = %d\n",m,all[i],a);
				else
					printf("%d / %d = %d\n",m,all[i],a);
				flag = 1;
			}
				
		}
		if(flag == 0)
			printf("There are no solutions for %d.\n",a);
	}
	return 0;
}

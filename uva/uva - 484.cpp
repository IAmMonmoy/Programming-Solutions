#include <bits/stdc++.h>
using namespace std;
int main()
{
	string x;
	int need[100000],m;
	map<int,int>mnmy;
	map<int,int>tt;
	int n = 0;
	while(scanf("%d", &m) != EOF)
	{
		if(!tt[m])
		{
			tt[m]=++n;
			need[n]=m;
		}
		mnmy[tt[m]]++;
	}
	map<int,int>::iterator it;
		
		for(it = mnmy.begin(); it != mnmy.end(); ++it)
			printf("%d %d\n",need[it->first],it->second);
	return 0;
}

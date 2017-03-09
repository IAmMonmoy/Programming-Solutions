#include <bits/stdc++.h>
using namespace std;
bitset<1000010>mnmy;
void generate()
{
	for(int i = 0; i <= 1000000; i++)
	{
		int sum = i;
		int k = i;
		while(k)
		{
			sum+=k%10;
			k/=10;
		}
		mnmy[sum]=1;
	}
}
int main()
{
	generate();
	for(int i = 0; i <= 1000000; i++)
	{
		if(!mnmy[i])
			printf("%d\n",i);
	}
	return 0;
}

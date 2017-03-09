#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int a,b,ara[20010];

	cin>>a;

	while(a--)
	{
		cin>>b;
		
		for(int i = 1; i <= b; i++)
			scanf("%d", &ara[i]);
		
		sort(ara,ara+b+1);
		
		int sum = 0,x=0;
		
		for(int i = b; i >= 1; i--)
		{
			x++;
			if(x==3)
			{
				sum += ara[i];
				
				x=0;
			}
		}
		
		cout<<sum<<endl;
	}
	return 0;
}

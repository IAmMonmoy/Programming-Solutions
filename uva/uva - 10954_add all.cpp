#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
int main()
{
	int a,b,c,i;
	while(scanf("%d", &a))
	{
		if(a==0)
			break;
		priority_queue<int>mnmy;
		for(i=0;i<a;i++)
		{
			scanf("%d",&b);
			mnmy.push(-b);
		}
		c=0;
		int sum=0;
		while(mnmy.size()>1)
		{
			int d = -mnmy.top();
			mnmy.pop();
			int e = -mnmy.top();
			mnmy.pop();
			sum = d+e;
			c+=sum;
			mnmy.push(-sum);
		}
		printf("%d\n",c);
	}
	return 0;
}

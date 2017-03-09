#include <bits/stdc++.h>
using namespace std;
int recur(int x)
{
	int sum = 0;
	
	while(x)
	{
		sum += ((x%10)*(x%10));
		x/=10;
	}

	if(sum == 1)
		return 1;
	else if(sum == 4)
		return 0;
		
	recur(sum);
}
int main()
{
	int a,cases=0,testcase;
	
	scanf("%d", &testcase);
	
	while(testcase--)
	{
		scanf("%d", &a);
			
		if(recur(a))
		    printf("Case #%d: %d is a Happy number.\n",++cases,a);
		else
			printf("Case #%d: %d is an Unhappy number.\n",++cases,a);
	}
	return 0;
}

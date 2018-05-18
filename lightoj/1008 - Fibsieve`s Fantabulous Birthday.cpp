
#include <stdio.h>
#include <math.h>
int main()
{
    int t,testCase;
	scanf("%d", &t);
	for(testCase = 1; testCase <= t; testCase++)
	{
		int first,second;
		double s;
		scanf("%lf", &s);
		double sqrtVal = sqrt(s);
		int n = sqrtVal;
		if(n < sqrtVal) n++;
		if(n&1)
		{
			long long lastValueOfSeries = n*n;
			int index = lastValueOfSeries-(long long)s+1;
			if(index < n)
				first = index, second=n;
			else first = n , second = n*2-index;
		}
		else
		{
			long long lastValueOfSeries = n*n;
			int index = lastValueOfSeries-(long long)s+1;
			if(index < n)
				first = n, second=index;
			else first = n*2-index , second = n;
		}

		printf("Case %d: %d %d\n",testCase,first,second);
	}
    return 0;
}


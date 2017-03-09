#include <bits/stdc++.h>
using namespace std;
int main()
{
	double h,m;
	while(scanf("%lf:%lf", &h, &m) == 2)
	{
		if(h == 0 && m == 0)
			break;
			
		double result = (60*h-11*m)/2;
		if(result<0)
			result*=-1;
		if(result > 180)
			result = 360-result;
		printf("%0.3lf\n",result);
	}
	return 0;
}

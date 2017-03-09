#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#define lli long long int
#define sc scanf
#define pr printf
using namespace std;
int main()
{
	int testcase,ara[10];
	string x;
	
	cin>>testcase;
	
	while(testcase--)
	{
		cin>>x;
		
		ara[0]=0,ara[1]=0,ara[2]=0,ara[3]=0,ara[4]=0,ara[5]=0;
		
		for(int i = 0; i < x.length(); i++)
		{
			if(x[i] == 'M')
				ara[0]++;
			else if(x[i] == 'A')
				ara[1]++;
			else if(x[i] == 'R')
				ara[2]++;
			else if(x[i] == 'G')
				ara[3]++;
			else if(x[i] == 'I')
				ara[4]++;
			else if(x[i] == 'T')
				ara[5]++;
		}
		
		ara[1] = ara[1]/3;
		ara[2] = ara[2]/2;
		
		sort(ara,ara+6);
		
		cout<<ara[0]<<endl;
	}
	return 0;
}

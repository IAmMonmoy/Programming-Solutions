#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#define lli long long int
using namespace std;
int main()
{
	char x[100];
	
	while(scanf("%s",x)==1)
	{
		if(strcmp(x,"0")==0)
			break;
		
		lli sum = 0;
		
		int len = strlen(x);
		
		for(int i = 0; i < len; i++)
		{
			sum += ((x[i]-'0')*(pow(2,len-i)-1));
		}
		
		cout<<sum<<endl;
	}
	return 0;
}

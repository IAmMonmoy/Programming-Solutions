#include <iostream>
#include <cstdio>
#include <cstring>
#define lli long long int
using namespace std;
int main()
{
	string x;
	int p,i,rem;
	
	while(cin>>x)
	{
		i = 1;
		
		if(x == "0")
			break;
		
		p = x[0]-'0';
		
		while(p < 17 && i < x.length())
		{
			p = p * 10 + (x[i]-'0');
			i++;
		}
		
		
		rem = p % 17;
	
		for(int j = i; i < x.length(); i++)
		{
			if(rem < 17)
			{
				while(rem < 17 && j < x.length())
				{
					rem = rem * 10 + (x[j]-'0');
					j++;
				}
			}
			
			rem = rem % 17;
		}
		
		if(rem == 0)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}

#include <iostream>
#include <cstdio>
using namespace std;
int temp(int x)
{
	int sum = 0;
	
	while(x)
	{
		sum += x%10;
		x /= 10;
	}
	
	return sum;
}

int main()
{
	char w[100],x[100],y[100],z[100];
	int testcase;
	
	scanf("%d",&testcase);
	
	while(testcase--)
	{
		scanf("%s %s %s %s", w, x, y, z);
	
		int sum = 0, sum1 = 0;
		
		for(int i = 0; i < 4; i++)
		{
			if(i%2==0)
			{
				int tempo = (w[i]-'0')*2;
				sum += temp(tempo);
			}
			else
				sum1 += (w[i]-'0');
		}
		
		for(int i = 0; i < 4; i++)
		{
			if(i%2==0)
			{
				int tempo = (x[i]-'0')*2;
				sum += temp(tempo);
			}
			else
				sum1 += (x[i]-'0');
		}
		
		for(int i = 0; i < 4; i++)
		{
			if(i%2==0)
			{
				int tempo = (y[i]-'0')*2;
				sum += temp(tempo);
			}
			else
				sum1 += (y[i]-'0');
		}
		
		for(int i = 0; i < 4; i++)
		{
			if(i%2==0)
			{
				int tempo = (z[i]-'0')*2;
				sum += temp(tempo);
			}
			else
				sum1 += (z[i]-'0');
		}
		
		int temp = sum + sum1;
		
		sum = temp % 10;
		
		if(sum == 0)
			printf("Valid\n");
		else
			printf("Invalid\n");
	}
	
	return 0;
}

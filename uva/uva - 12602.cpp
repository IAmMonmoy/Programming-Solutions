#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	long long int testcase,i,number,answer,ara[1000];
	char a,b,c,d;
	
	cin>>testcase;
	
	while(testcase--)
	{
		answer = 0;
		
		cin>>a>>b>>c>>d>>number;
		
		answer += (a-65)*pow(26,2);
		answer += (b-65)*pow(26,1);
		answer += (c-65)*pow(26,0);
		
		if(abs(answer-number) <= 100)
			cout<<"nice"<<endl;
		else
			cout<<"not nice"<<endl;
	}
	return 0;
}

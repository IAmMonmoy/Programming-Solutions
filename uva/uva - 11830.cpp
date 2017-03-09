#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int a;
	string y;
	while(cin>>a>>y)
	{
		string x;
		if(a == 0 && y =="0")
			break;
		char c = a+'0';
		ll len = y.length();
		for(ll i = 0; i < len; i++)
			if(y[i] != c)
				x+=y[i];
		ll i = 0;
		if(x[i] == '0')
			while(i< x.length() && x[i] == '0')
				i++;
		if(i == x.length())
			printf("0\n");
		else
		{
			for(ll j = i; j < x.length(); j++)
				cout<<x[j];
			
			cout<<endl;
		}
	}
	return 0;
}

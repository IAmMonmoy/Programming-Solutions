#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll size = 1000000;
bitset<1000000>mnmy;
int ara[1000000]={0};
vector<int>prime;
int convert(int x)
{
	int sum = 0;

	while(x)
	{
		sum += x % 10;
		x/=10;
	}

	if(mnmy[sum])
		return 1;

	return 0;
}
void sieve()
{
	mnmy.reset(),mnmy.flip();
	mnmy.set(0,0),mnmy.set(1,0);
	int x = 0;
	//mnmy.set(2,1);

	for(ll i = 2; i <= size; i++)
	{
		if(mnmy[i])
		{
			for(ll j = i * i; j <= size; j += i)
			{
				mnmy[j] = 0;

			}
			if(convert(i))
            {
                x++;
            }

		}
		ara[i] = x;
	}
}
int main()
{
	sieve();

	int x,y,testcase;

	scanf("%d", &testcase);

	while(testcase--)
	{
		scanf("%d %d", &x, &y);

        printf("%d\n",ara[y] - ara[x-1]);
	}

    return 0;

}

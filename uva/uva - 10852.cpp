#include <bits/stdc++.h>
using namespace std;
int limit = 10000;
bitset<10000>mnmy;
void sieve()
{
    mnmy.flip();

    mnmy[0] = 0, mnmy[1] = 0;

    for(int i = 2; i <= limit; i++)
    {
        if(mnmy[i])
        {
            for(int j = i*i; j <= limit; j+=i)
            {
                mnmy[j] = 0;
            }
        }
    }
}
int main()
{
    sieve();
    int x,t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &x);

        for(int i = (x/2)+1; ; i++)
        {
            if(mnmy[i])
            {
                printf("%d\n",i);
                break;
            }
        }
    }
}

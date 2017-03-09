#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int count = 0,sum=0;

    while(cin>>c)
    {
        if(c == '#')
        {
            if(sum == 0)
                printf("YES\n");
            else
                printf("NO\n");
            sum = 0;
            continue;
        }

        sum = (sum*2 + (c-48))% 131071;
    }
    return 0;
}

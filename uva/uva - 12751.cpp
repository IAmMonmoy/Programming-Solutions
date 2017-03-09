#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase,cases=0,a,b,c;
    scanf("%d", &testcase);
    while(testcase--)
    {
        scanf("%d %d %d", &a, &b, &c);
        int sum = 0;
        for(int i = 0; i < b; i++)
        {
            sum+=c;
            c++;
        }
        int z = (a*(a+1))/2;

        printf("Case %d: %d\n",++cases,z-sum);
    }
    return 0;
}

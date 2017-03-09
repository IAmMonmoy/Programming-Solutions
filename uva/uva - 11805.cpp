#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b,c,d,cases=0,i;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d %d %d", &b, &c, &d);
        int pass=0;
        for(i=c;pass <= (d-1); i++)
        {
            if(i==b)
            {
                 i=0;
                 c=0;
            }
            pass++;
        }
       printf("Case %d: %d\n",++cases,i);
    }
    return 0;
}

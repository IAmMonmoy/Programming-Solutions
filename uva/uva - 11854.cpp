#include <iostream>
#include <cstdio>
#include <cmath>
#define pi acos(-1)
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c))
    {
        if(a!=0 || b!=0 || c!=0)
        {
            if(a==0 && b==0 && c==0)
                break;
            if(a*a == b*b + c*c)
                printf("right\n");
            else if(b*b == a*a + c*c)
                printf("right\n");
            else if(c*c == b*b + a*a)
                printf("right\n");
            else
                printf("wrong\n");
        }
        else
            break;
    }
    return 0;
}

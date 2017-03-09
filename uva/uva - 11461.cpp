#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int a,b,flag;
    while(scanf("%d %d",&a,&b))
    {
        flag=0;
        if(a==0 && b==0)
            break;
        for(int i=a;i<=b;i++)
        {
            int p = sqrt(i);
            if(p*p == i)
                flag++;
        }
        printf("%d\n",flag);
    }
    return 0;
}

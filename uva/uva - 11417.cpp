#include <iostream>
#include <cstdio>
using namespace std;
int gcd(int a,int b)
{
    int r;
    while(b!=0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    int a,i,j;
    while(scanf("%d",&a))
    {
        if(a==0)
            break;
        int sum=0;
        for(i=1; i<a; i++)
        {
            for(j=i+1; j<=a; j++)
            {
                sum += gcd(j,i);
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

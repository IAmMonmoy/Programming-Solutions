#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long int a,b,i,x,y,count,flag,temp;
    while(scanf("%lld %lld",&a,&b))
    {
        if(a==0 && b==0)
            break;
        if(a>b)
        {
            temp = a;
            a=b;
            b=temp;
        }
        x=0;
        if(a==0)
        {
            x=0;
            a+=1;
        }
        for(i=a;i<=b;i++)
        {
            count = 0;
            y=i;
            do
            {
                if(y%2==0)
                    y/=2;
                else y = 3*y+1;

                count++;
            }
            while(y!=1);

            if(count > x)
            {
                 x=count;
                 flag=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,flag,x);
    }
    return 0;
}

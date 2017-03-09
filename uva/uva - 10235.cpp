#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int isprime(int a)
{
    int i;
    if(a==1 || a==0)
        return 0;

    for(i = 2; i <= sqrt(a);i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int a,reverses,flag,p,x;
    while(scanf("%d",&a)==1)
    {
        p=a;
        reverses=0,flag=0;
        if(!isprime(a))
             printf("%d is not prime.\n",p);
        else
        {
            while(a!=0)
            {
                x = a%10;
                reverses = (reverses+x)*10;
                a/=10;
            }
            reverses/=10;
            if(isprime(reverses))
                flag++;
            if(reverses == p)
                 printf("%d is prime.\n",p);
            else if(flag==1)
                printf("%d is emirp.\n",p);
            else
                printf("%d is prime.\n",p);
        }

    }
    return 0;
}

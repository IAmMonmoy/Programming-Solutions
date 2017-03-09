#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,e,f,c,total;
    scanf("%d",&n);
    while(n--)
    {
        total=0;
        scanf("%d %d %d",&e, &f, &c);
        int x=e+f;
        int p = 3;
        while(p != 0)
        {
            p = x/c;
            total += p;
            x = (x % c + p);
        }
        printf("%d\n",total);
    }
    return 0;
}

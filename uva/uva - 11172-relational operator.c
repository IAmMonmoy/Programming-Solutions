#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld", &a);
    while(a--)
    {
        scanf("%lld %lld",&b,&c);
        if(b>c)
            printf(">\n");
        else if(b<c)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}

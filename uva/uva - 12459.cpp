#include <stdio.h>
 
long long int fip[100];
int main(void)
{
    fip[0] = 1;
    fip[1] = 1;
    int i,n;
    for( i = 2; i < 81; i++)
        fip[i] = fip[i - 1] + fip[i - 2];
    while (scanf("%d",&n) == 1)
    {
        if (!n)
            break;
        printf("%lld\n", fip[n]);
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d %d", &a, &b) == 2)
    {
        int p = a/b;
        printf("[%d;",p);
        int i = 0;
        while(a % b != 0)
        {
            if(i != 0)
                printf(",");
            int x = a%b;
            a = b;
            b = x;
            printf("%d",a/b);
            i++;
        }
        printf("]\n");
    }
    return 0;
}

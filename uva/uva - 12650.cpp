#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ara;
    while(scanf("%d %d", &a, &b) == 2)
    {
        map<int,int>mnmy;

        for(int i = 0; i < b; i++)
        {
             scanf("%d", &ara);
             mnmy[ara] = 1;
        }


        if(a == b)
        {
            printf("*\n");
            continue;
        }

        for(int i = 1; i <= a; i++)
        {
            if(mnmy[i] == 0)
                printf("%d ",i);

        }
        printf("\n");
    }
    return 0;
}

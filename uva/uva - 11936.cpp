#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d %d %d",&b,&c,&d);
        if(b+c > d)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }

    return 0;
}

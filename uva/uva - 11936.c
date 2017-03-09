#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char a,b,c,d;
    while(scanf("%d",&a))
    {
        scanf("%d %d %d",&b,&c,&d);
        if(b+c > d)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}

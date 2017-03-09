#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char a[100],cases=0;
    while(scanf("%s",a))
    {
        if(strcmp(a,"*")==0)
            break;
        else if(strcmp(a,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",++cases);
        else
            printf("Case %d: Hajj-e-Asghar\n",++cases);
    }
    return 0;
}

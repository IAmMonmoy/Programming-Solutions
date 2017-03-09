#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d %d", &a, &b) == 2)
    {
        if(a > b)
            swap(a,b);
        int p = b-a;
        int x = b/p;
        if(p*x != b)
            x+=1;
        printf("%d\n",x);
    }
    return 0;
}

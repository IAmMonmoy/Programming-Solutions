#include <bits/stdc++.h>
using namespace std;
int func(int a, int b, int c)
{
    if(b == 0)
        return 1;

    if(!(b&1))
    {
        int x = func(a,b/2,c)%c;
        return (x*x)%c;
    }
    else
        return a*func(a,b-1,c)%c;
}
int main()
{
    int a,b,c;

    while(scanf("%d %d %d", &a, &b, &c) == 3)
    {
        cout<<func(a%c,b,c)<<endl;;
    }
    return 0;
}

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,cases=0;
    double a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf %lf",&a,&b);
        double celcious = (5*b)/9 + a;
        printf("Case %d: %0.2lf\n",++cases,celcious);
    }
    return 0;
}

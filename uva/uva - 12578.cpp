#include <iostream>
#include <cstdio>
#include <cmath>
#define pi acos(-1)
using namespace std;
int main()
{
    int a;
    double b,width,radious;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%lf",&b);
        width = (6*b)/float(10);
        radious = b/float(5);
        double r = pi * radious * radious;
        double y = (b*width) - r;
        printf("%0.2lf %0.2lf\n",r,y);
    }
    return 0;
}

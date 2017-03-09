#include <stdio.h>
int main()
{
    double a,b,c;
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        double vag = (a+b)/3;
        double first = a-vag;
        double second = b-vag;
        double ans = (c*first)/(first+second);
        printf("%0.0lf\n",ans);
    }
    return 0;
}
